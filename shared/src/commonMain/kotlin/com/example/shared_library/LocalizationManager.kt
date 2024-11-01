import com.russhwolf.settings.Settings
import com.russhwolf.settings.get
import com.russhwolf.settings.set
import io.ktor.client.*
import io.ktor.client.call.*
import io.ktor.client.request.*
import kotlinx.serialization.json.Json
import kotlinx.serialization.Serializable
import kotlinx.serialization.encodeToString

@Serializable
data class LocalizationData(val translations: Map<String, String>) // Maps keys to localization values

class LocalizationManager(private val settings: Settings) {
    private val client = HttpClient() // Replace CIO with appropriate engine
    private var cachedData: LocalizationData? = null

    // Key to save JSON in settings
    private val cacheKey: String = "localization_cache"

    suspend fun fetchLocalizationData(apiUrl: String) {
        cachedData = cachedData ?: settings.get<String>(cacheKey)?.let { json ->
            Json.decodeFromString<LocalizationData>(json)
        }

        if (cachedData == null) {
            val responseBody: String = client.get(apiUrl).body()
            cachedData = Json.decodeFromString(responseBody)
            // Save to cache
            settings[cacheKey] = Json.encodeToString(cachedData!!)
        }
    }

    // Retrieve localization by key
    fun getLocalizedValue(key: String): String? {
        return cachedData?.translations?.get(key)
    }
}