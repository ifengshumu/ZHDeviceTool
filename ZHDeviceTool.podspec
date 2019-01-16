#
#  Be sure to run `pod spec lint ZHDeviceTool.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

  s.name         = "ZHDeviceTool"
  s.version      = "1.0.0"
  s.summary      = "设备信息"
  s.description  = "有关iOS设备信息的操作"

  s.homepage     = "https://github.com/leezhihua/ZHDeviceTool"


  s.license      = { :type => "MIT", :file => "LICENSE" }
  s.author             = { "leezhihua" => "leezhihua@yeah.net" }


  s.ios.deployment_target = "8.0"

  s.source       = { :git => "https://github.com/leezhihua/ZHDeviceTool.git", :tag => "#{s.version}" }

  s.source_files  = "Pod/Classes/*.{h,m}"

  s.frameworks = "UIKit", "CoreTelephony", "SystemConfiguration"

  s.requires_arc = true


end
