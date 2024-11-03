package com.example.shared_library

import kotlinx.cinterop.BetaInteropApi
import kotlinx.cinterop.ExperimentalForeignApi
import platform.Foundation.NSCachesDirectory
import platform.Foundation.NSFileManager
import platform.Foundation.NSSearchPathForDirectoriesInDomains
import platform.Foundation.NSString
import platform.Foundation.NSUTF8StringEncoding
import platform.Foundation.NSUserDomainMask
import platform.Foundation.create
import platform.Foundation.stringWithContentsOfFile
import platform.Foundation.writeToFile

class IOSPlatformContext() : PlatformContext {
    override val cacheDirPath: String
        get() = ""
}

@OptIn(ExperimentalForeignApi::class)
actual suspend fun saveJsonDataToFile(jsonData: String, filename: String, context: PlatformContext) {
    val paths = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, true)
    val cacheDir = paths.firstOrNull() as String?
    val filePath = cacheDir?.let { "$it/$filename" }

    filePath?.let {
        val nsStringData = jsonData.toNSString()
        nsStringData.writeToFile(it, atomically = true, encoding = NSUTF8StringEncoding, error = null)
    }
}
@OptIn(BetaInteropApi::class)
fun String.toNSString(): NSString = NSString.create(string = this)


@OptIn(ExperimentalForeignApi::class)
actual suspend fun readJsonDataFromFile(filename: String, context: PlatformContext): String? {
    val cacheDir = context.cacheDirPath
    val filePath = "$cacheDir/$filename"

    return if (NSFileManager.defaultManager.fileExistsAtPath(filePath)) {
        NSString.stringWithContentsOfFile(filePath, encoding = NSUTF8StringEncoding, error = null)?.toString()
    } else {
        null // Return null if the file doesn't exist
    }
}