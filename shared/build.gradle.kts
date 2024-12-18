import org.jetbrains.kotlin.gradle.dsl.JvmTarget

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.kotlinCocoapods)
    alias(libs.plugins.androidLibrary)
    kotlin("plugin.serialization") version "2.0.20"
}

kotlin {
    androidTarget {
        compilations.all {
            compileTaskProvider.configure {
                compilerOptions {
                    jvmTarget.set(JvmTarget.JVM_1_8)
                }
            }
        }
    }
    iosX64()
    iosArm64()
    iosSimulatorArm64()

    cocoapods {
        framework {
            version = "1.0.0"
            baseName = "shared"
            authors = "Gio"
            summary = "Shared library"
            isStatic = false  // Or set to true based on your needs
            ios.deploymentTarget = "12.0"
            source = "{ :git => 'https://github.com/goga172792/shared-kotlin-library.git', :branch => 'main' }"
            homepage = "https://github.com/goga172792/shared-kotlin-library"
            license = "{ :type => 'MIT', :text => 'License text'}"
        }
    }

    sourceSets {
        commonMain.dependencies {
            implementation(libs.ktor.client.core)
            implementation(libs.ktor.client.logging)
            implementation(libs.ktor.client.content.negotiation)
            implementation(libs.ktor.serialization.kotlinx.json)
            implementation("androidx.core:core-ktx:1.7.0")
        }
        androidMain.dependencies {
            implementation(libs.ktor.client.okhttp)
        }
        iosMain.dependencies {
            implementation(libs.ktor.client.darwin)
        }
        commonTest.dependencies {
            implementation(libs.kotlin.test)
        }
    }
}

android {
    namespace = "com.example.shared_library"
    compileSdk = 34
    defaultConfig {
        minSdk = 24
    }
    compileOptions {
        sourceCompatibility = JavaVersion.VERSION_1_8
        targetCompatibility = JavaVersion.VERSION_1_8
    }
}

tasks.register<Copy>("buildXCFramework") {
    // Define the default CocoaPods output path
    val cocoapodsReleaseDir = layout.buildDirectory.dir("cocoapods/publish/release")
    val outputDir = File(rootProject.projectDir, "")

    from(cocoapodsReleaseDir)
    into(outputDir)

    // Make sure the XCFramework is built before moving
    dependsOn("podPublishXCFramework")
}