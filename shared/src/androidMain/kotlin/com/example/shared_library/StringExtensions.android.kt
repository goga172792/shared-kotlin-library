package com.example.shared_library

actual fun String.localizedFormat(vararg args: Any?): String {
    var formattedString = this
    args.forEachIndexed { index, arg ->
        formattedString = formattedString.replace("{$index}", arg.toString())
    }
    return formattedString
}