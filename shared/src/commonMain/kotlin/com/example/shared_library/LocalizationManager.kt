import com.example.shared_library.Platform
import io.ktor.client.*
import io.ktor.client.call.*
import io.ktor.client.plugins.contentnegotiation.*
import io.ktor.client.request.*
import io.ktor.serialization.kotlinx.json.*
import kotlinx.serialization.json.Json
import kotlinx.serialization.json.JsonObject
import okio.FileSystem
import okio.Path
import okio.IOException
import okio.buffer
import kotlinx.coroutines.*
import kotlinx.serialization.json.contentOrNull
import kotlinx.serialization.json.jsonPrimitive
import okio.Path.Companion.toPath
import okio.SYSTEM
import okio.use

class LocalizationManager(private val apiUrl: String) {

    private val client = HttpClient {
        install(ContentNegotiation) {
            json(Json { ignoreUnknownKeys = true })
        }
    }

    private var localizationData: JsonObject? = null
    private val filePath: Path = "localization.json".toPath()

    // Load localization data from network and cache
    suspend fun downloadLocalizationData() {
        try {
            val response: String = client.get(apiUrl).body()
            localizationData = Json.decodeFromString(response)
            saveDataToFile(response)
        } catch (e: Exception) {
            println("Error downloading localization data: ${e.message}")
        }
    }

    // Get localization string by key
    fun getLocalization(key: String): String? {
        return localizationData?.get(key)?.jsonPrimitive?.contentOrNull
    }

    // Save JSON data to file using Okio
    private fun saveDataToFile(data: String) {
        try {
            val fileSystem = FileSystem.SYSTEM
            fileSystem.sink(filePath).buffer().use { sink ->
                sink.writeUtf8(data)
            }
            println("Localization data saved to file.")
        } catch (e: IOException) {
            println("Error saving data to file: ${e.message}")
        }
    }

    // Load JSON data from file into memory using Okio
    fun loadLocalizationDataFromFile() {
        try {
            val fileSystem = FileSystem.SYSTEM
            fileSystem.source(filePath).buffer().use { source ->
                val data = source.readUtf8()
                localizationData = Json.decodeFromString(data)
            }
            println("Localization data loaded from file.")
        } catch (e: IOException) {
            println("Error loading data from file: ${e.message}")
        } catch (e: Exception) {
            println("Error parsing localization data: ${e.message}")
        }
    }
}