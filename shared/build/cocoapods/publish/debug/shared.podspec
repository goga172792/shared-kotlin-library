Pod::Spec.new do |spec|
    spec.name                     = 'shared'
    spec.version                  = '1.0.0'
    spec.homepage                 = 'https://github.com/goga172792/shared-kotlin-library/tree/main'
    spec.source                   = { :http=> ''}
    spec.authors                  = ''
    spec.license                  = { :type => 'MIT', :text => 'License text'}
    spec.summary                  = 'Shared library'
                
    spec.libraries                = 'c++'
    spec.ios.deployment_target    = '12.0'
                
                
                
                
                
    spec.vendored_frameworks = shared.xcframework
end