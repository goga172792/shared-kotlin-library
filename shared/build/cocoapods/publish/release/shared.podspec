Pod::Spec.new do |spec|
    spec.name                     = 'shared'
    spec.version                  = '1.0.0'
    spec.homepage                 = 'https://github.com/goga172792/shared-kotlin-library'
    spec.source                   = { :git => 'https://github.com/goga172792/shared-kotlin-library.git', :branch => 'main' }
    spec.authors                  = 'Gio'
    spec.license                  = { :type => 'MIT', :text => 'License text'}
    spec.summary                  = 'Shared library'
    spec.vendored_frameworks      = 'shared.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target    = '12.0'
                
                
                
                
                
                
end