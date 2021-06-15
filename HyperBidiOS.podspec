Pod::Spec.new do |spec|
  spec.name         = "HyperBidiOS"
  spec.version      = "5.7.51"
  spec.summary      = "A short description of HyperBid SDK for iOS."
  spec.description  = <<-DESC
            HyperBid SDK for developer
                   DESC
  spec.homepage     = "https://github.com/hyperbid/hyperbid-ios-sdk"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "HyperBid" => "developer@hyperbid.com" }
  spec.source       = { :git => "https://github.com/hyperbid/hyperbid-ios-sdk.git", :tag => spec.version }
  spec.platform     = :ios, '9.0'
  spec.ios.deployment_target = '9.0'
  spec.requires_arc = true
  spec.frameworks = 'SystemConfiguration', 'CoreGraphics','Foundation','UIKit'

  spec.user_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  spec.libraries = 'c++', 'z', 'sqlite3', 'xml2', 'resolv'
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 armv7s arm64' }
  spec.default_subspecs = 'HyperBidSDK'

  spec.subspec 'HyperBidSDK' do |ss|
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBid{Banner,Splash,SDK,RewardedVideo,Interstitial,Native}.framework'
     ss.resource = 'HyperBidiOS/HyperBidSDK.bundle'
  end

  spec.subspec 'HyperBidAdcolonyAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidAdColony*.framework'
  end

  spec.subspec 'HyperBidAdmobAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidAdmob*.framework'
  end

  spec.subspec 'HyperBidApplovinAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidApplovin*.framework'
  end

  spec.subspec 'HyperBidAppnextAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidAppnext*.framework'
  end

  spec.subspec 'HyperBidBaiduAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidBaidu*.framework'
  end

  spec.subspec 'HyperBidChartboostAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidChartboost*.framework'
  end

  spec.subspec 'HyperBidFacebookAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidFacebook*.framework'
  end

  spec.subspec 'HyperBidFyberAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidFyber*.framework'
  end

  spec.subspec 'HyperBidGDTAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidGDT*.framework'
  end

  spec.subspec 'HyperBidInmobiAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidInmobi*.framework'
  end

  spec.subspec 'HyperBidIronSourceAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidIronSource*.framework'
  end

  spec.subspec 'HyperBidKidozAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidKidoz*.framework'
  end

  spec.subspec 'HyperBidKSAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidKuaiShou*.framework'
  end

  spec.subspec 'HyperBidMaioAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidMaio*.framework'
  end

  spec.subspec 'HyperBidMaxAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidMax*.framework'
  end

  spec.subspec 'HyperBidMintegralAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidMintegral*.framework'
  end

  spec.subspec 'HyperBidMopubAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidMopub*.framework'
  end

  spec.subspec 'HyperBidMyTargetAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidMyTarget*.framework'
  end

  spec.subspec 'HyperBidNendAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidNend*.framework'
  end

  #Nend embedded framework not support

  spec.subspec 'HyperBidOguryAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidOgury*.framework'
  end

  spec.subspec 'HyperBidTouTiaoAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidPangle*.framework'
  end

  spec.subspec 'HyperBidSigmobAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidSigmob*.framework'
  end

  spec.subspec 'HyperBidStartAppAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidStartApp*.framework'
  end

  spec.subspec 'HyperBidTapjoyAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidTapjoy*.framework'
  end

  spec.subspec 'HyperBidUnityAdsAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidUnityAds*.framework'
  end

  spec.subspec 'HyperBidVungleAdapter' do |ss|
     ss.dependency 'HyperBidiOS/HyperBidSDK'
     ss.ios.deployment_target = '9.0'
     ss.vendored_frameworks = 'HyperBidiOS/HyperBidVungle*.framework'
  end

end
