package com.example.shared_library
import platform.Foundation.*

actual fun randomUUID(): String = NSUUID().UUIDString()