package com.example.androidapp

import android.os.Bundle
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview
import com.example.androidapp.ui.theme.SharedLibraryTheme
import com.example.shared_library.AndroidPlatformContext
import com.example.shared_library.LocalizationManager
import com.example.shared_library.localizedFormat

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        LocalizationManager.initialize("https://mocki.io/v1/4809f386-6415-4d72-9acb-318f21fefe1f", AndroidPlatformContext(this)){
            LocalizationManager.getStringByKey("qaqik")?.localizedFormat("1","1","1")
        }
        enableEdgeToEdge()
        setContent {
            SharedLibraryTheme {
                Scaffold(modifier = Modifier.fillMaxSize()) { innerPadding ->
                    Greeting(
                        name = "Android",
                        modifier = Modifier.padding(innerPadding)
                    )
                }
            }
        }
    }
}

@Composable
fun Greeting(name: String, modifier: Modifier = Modifier) {
    Text(
        text = "Hello $name!",
        modifier = modifier
    )
}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    SharedLibraryTheme {
        Greeting("Android")
    }
}