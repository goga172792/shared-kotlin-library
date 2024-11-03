package com.example.shared_library
import java.io.File
import android.content.Context

actual suspend fun saveJsonDataToFile(jsonData: String, filename: String, context: PlatformContext) {
    val cacheDir = context.cacheDirPath
    val file = File(cacheDir, filename)
    file.writeText(jsonData)
}

class AndroidPlatformContext(private val context: Context) : PlatformContext {
    override val cacheDirPath: String
        get() = context.cacheDir.absolutePath
}

actual suspend fun readJsonDataFromFile(filename: String, context: PlatformContext): String? {
    return try {
        val file = File(context.cacheDirPath, filename)
        if (file.exists()) {
            file.readText()
        } else {
            null // Return null if the file doesn't exist
        }
    } catch (e: Exception) {
        e.printStackTrace()
        null // Return null if an error occurs while reading the file
    }
}