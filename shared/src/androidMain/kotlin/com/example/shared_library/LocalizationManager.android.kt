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