package com.example.shared_library

interface Platform {
    val name: String
}

expect fun getPlatform(): Platform

class ABC{
    fun doSomething(){
        println("QAq mej")
    }
}