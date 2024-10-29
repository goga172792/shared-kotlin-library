Pod::Spec.new do |spec|
    spec.name                     = 'shared'
    spec.version                  = '1.0.0'
    spec.homepage                 = 'https://github.com/goga172792/shared-kotlin-library'
    spec.source                   = { :git => "https://github.com/goga172792/shared-kotlin-library.git", :tag => '1.0.0' }
    spec.authors                  = 'Gio'
    spec.license                  = { :type => 'MIT', :file => 'LICENSE' }
    spec.summary                  = 'Some description for the Shared Module'
    spec.vendored_frameworks      = 'shared.framework'
    spec.libraries                = 'c++'
    spec.module_name              = "#{spec.name}_umbrella"
    spec.ios.deployment_target    = '13.0'
    spec.pod_target_xcconfig      = { 'CODE_SIGNING_ALLOWED' => 'NO' }
                
                
    if !Dir.exist?('shared.framework') || Dir.empty?('shared.framework')
        raise "

        Kotlin framework 'shared' doesn't exist yet, so a proper Xcode project can't be generated.
        'pod install' should be executed after running ':generateDummyFramework' Gradle task:

            ./gradlew :shared:generateDummyFramework

        Alternatively, proper pod installation is performed during Gradle sync in the IDE (if Podfile location is set)"
    end
                
    spec.xcconfig = {
        'ENABLE_USER_SCRIPT_SANDBOXING' => 'NO',
    }
                
    spec.pod_target_xcconfig = {
        'KOTLIN_PROJECT_PATH' => ':shared',
        'PRODUCT_MODULE_NAME' => 'shared',
    }
                
    spec.script_phases = [
        {
            :name => 'Build shared',
            :execution_position => :before_compile,
            :shell_path => '/bin/sh',
            :script => <<-SCRIPT
                if [ "YES" = "$OVERRIDE_KOTLIN_BUILD_IDE_SUPPORTED" ]; then
                  echo "Skipping Gradle build task invocation due to OVERRIDE_KOTLIN_BUILD_IDE_SUPPORTED environment variable set to \"YES\""
                  exit 0
                fi
                set -ev
                REPO_ROOT="$PODS_TARGET_SRCROOT"
                "$REPO_ROOT/../gradlew" -p "$REPO_ROOT" $KOTLIN_PROJECT_PATH:syncFramework \
                    -Pkotlin.native.cocoapods.platform=$PLATFORM_NAME \
                    -Pkotlin.native.cocoapods.archs="$ARCHS" \
                    -Pkotlin.native.cocoapods.configuration="$CONFIGURATION"
            SCRIPT
        }
    ]
                
end