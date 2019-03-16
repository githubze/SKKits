Pod::Spec.new do |s|
  s.name         = "SKKits"
  s.version      = "1.0.1"
  s.summary      = "SKKits."
  s.homepage     = "https://github.com/githubze/SKKits.git"
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { 'githubze' => '1424395628@qq.com' }
  s.source       = { :git => "https://github.com/githubze/SKKits.git", :tag => s.version.to_s }
  s.ios.deployment_target = '8.0'
  s.source_files = "SKKits/*.{h,m}"
  s.requires_arc = true

end