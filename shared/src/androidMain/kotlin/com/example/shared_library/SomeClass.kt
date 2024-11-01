package com.example.shared_library
import java.util.UUID

actual fun randomUUID() = UUID.randomUUID().toString()