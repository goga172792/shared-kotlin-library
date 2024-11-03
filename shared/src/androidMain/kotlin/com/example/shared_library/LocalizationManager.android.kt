package com.example.shared_library
import java.io.File
import android.content.Context

actual suspend fun saveJsonDataToFile(jsonData: String, filename: String, context: Any?) {
    val appContext = context as? Context ?: throw IllegalArgumentException("Context is required for Android")
    val cacheDir = appContext.cacheDir
    val file = File(cacheDir, filename)
    file.writeText(jsonData)
}