package com.example.shared_library

import io.ktor.client.*
import io.ktor.client.call.body
import io.ktor.client.request.*
import io.ktor.client.plugins.contentnegotiation.*
import io.ktor.client.plugins.logging.*
import kotlinx.serialization.json.Json
import kotlinx.coroutines.*
import io.ktor.serialization.kotlinx.json.*
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.contentOrNull
import kotlinx.serialization.json.jsonPrimitive

object LocalizationManager {
    private const val LOCALIZATION_FILENAME = "localization.json"
    private var API_URL = ""
    private var localizationData: Map<String, String> = emptyMap()
    lateinit var platformContext: PlatformContext

    private val client = HttpClient {
        install(ContentNegotiation) {
            json(Json {
                prettyPrint = true
                isLenient = true
            })
        }
        install(Logging) {
            level = LogLevel.BODY
        }
    }

    fun initialize(urlString: String, platformContext: PlatformContext, onLocalizationSet: (() -> Unit)? = null) {
        this.platformContext = platformContext
        this.API_URL = urlString
        CoroutineScope(Dispatchers.Default).launch {
            try {
                fetchAndCacheLocalization()
            } catch (e: Exception) {
                loadLocalizationFromCache()
            }
            onLocalizationSet?.invoke()
        }
    }

    private suspend fun fetchAndCacheLocalization() {
        try {
            val jsonData = client.get(API_URL).body<String>()
            saveJsonToCache(jsonData)
            localizationData = parseJsonToMap(jsonData)
        } catch (e: Exception) {
            throw e // Rethrow exception to trigger fallback
        }
    }

    private suspend fun loadLocalizationFromCache() {
        val cachedData = readJsonDataFromFile(LOCALIZATION_FILENAME, platformContext)
        if (cachedData != null) {
            localizationData = parseJsonToMap(cachedData)
        }
    }

    private fun parseJsonToMap(jsonData: String): Map<String, String> {
        val jsonObject = Json.parseToJsonElement(jsonData)
        return if (jsonObject is JsonObject) {
            jsonObject.mapValues { it.value.jsonPrimitive.contentOrNull ?: "" }
        } else {
            emptyMap()
        }
    }

    private suspend fun saveJsonToCache(jsonData: String) {
        saveJsonDataToFile(jsonData, LOCALIZATION_FILENAME, platformContext)
    }

    fun getStringByKey(key: String): String? {
        return localizationData[key]
    }
}

expect suspend fun saveJsonDataToFile(jsonData: String, filename: String, context: PlatformContext)
expect suspend fun readJsonDataFromFile(filename: String, context: PlatformContext): String?


interface PlatformContext {
    val cacheDirPath: String
}