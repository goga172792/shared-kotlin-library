package com.example.shared_library
import io.ktor.client.*
import io.ktor.client.request.*
import io.ktor.client.plugins.contentnegotiation.*
import io.ktor.client.plugins.logging.*
import kotlinx.serialization.json.Json
import kotlinx.coroutines.*
import io.ktor.serialization.kotlinx.json.*
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.jsonPrimitive

object LocalizationManager {
    private const val LOCALIZATION_FILENAME = "localization.json"
    private const val API_URL = "https://mocki.io/v1/a26c8d94-5577-4cb1-b2b0-e31f25fe6426"  // Replace with your localization API endpoint

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

    private var localizationData: Map<String, String> = emptyMap()

    init {
        CoroutineScope(Dispatchers.Default).launch {
            fetchAndCacheLocalization()
        }
    }

    private suspend fun fetchAndCacheLocalization() {
        val jsonData = client.get(API_URL).toString()
        saveJsonToCache(jsonData)
        localizationData = parseJsonToMap(jsonData)
    }

    private fun parseJsonToMap(jsonData: String): Map<String, String> {
        val jsonObject = Json.parseToJsonElement(jsonData) as JsonObject
        return jsonObject.mapValues { it.value.jsonPrimitive.content }
    }

    private suspend fun saveJsonToCache(jsonData: String) {
        saveJsonDataToFile(jsonData, LOCALIZATION_FILENAME, null)
    }

    fun getStringByKey(key: String): String? {
        return localizationData[key]
    }
}

expect suspend fun saveJsonDataToFile(jsonData: String, filename: String, context: Any?)