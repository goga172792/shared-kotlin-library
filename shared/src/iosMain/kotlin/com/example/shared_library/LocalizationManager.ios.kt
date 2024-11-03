package com.example.shared_library

import kotlinx.cinterop.BetaInteropApi
import kotlinx.cinterop.ExperimentalForeignApi
import platform.Foundation.NSCachesDirectory
import platform.Foundation.NSSearchPathForDirectoriesInDomains
import platform.Foundation.NSString
import platform.Foundation.NSUTF8StringEncoding
import platform.Foundation.NSUserDomainMask
import platform.Foundation.create
import platform.Foundation.writeToFile

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

class IOSPlatformContext() : PlatformContext {
    override val cacheDirPath: String
        get() = ""
}