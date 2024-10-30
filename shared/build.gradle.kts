import org.jetbrains.kotlin.gradle.dsl.JvmTarget

plugins {
    alias(libs.plugins.kotlinMultiplatform)
    alias(libs.plugins.kotlinCocoapods)
    alias(libs.plugins.androidLibrary)
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
            isStatic = false  // Or set to true based on your needs
            ios.deploymentTarget = "14.0"
        }
    }

    sourceSets {
        commonMain.dependencies {
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