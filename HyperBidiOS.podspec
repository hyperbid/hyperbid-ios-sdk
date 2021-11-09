Pod::Spec.new do |spec|
  spec.name         = "HyperBidiOS"
  spec.version      = "5.7.78"
  spec.summary      = "HyperBid SDK for iOS."
  spec.description  = <<-DESC
            This is the HyperBid SDK for iOS.
                   DESC
  spec.homepage     = "https://github.com/hyperbid/hyperbid-ios-sdk"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "HyperBid" => "developer@hyperbid.com" }
  spec.source       = { :git => "https://github.com/hyperbid/hyperbid-ios-sdk.git", :tag => spec.version.to_s }
  spec.ios.deployment_target = '9.0'
  spec.static_framework = true
  spec.requires_arc = true
  spec.frameworks = 'SystemConfiguration', 'CoreGraphics','Foundation','UIKit'

  spec.pod_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  spec.libraries = 'c++', 'z', 'sqlite3', 'xml2', 'resolv'
  spec.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 armv7s arm64' }
  spec.default_subspecs = 'HyperBidSDK'



  spec.subspec 'HyperBidSDK' do |ss|
    ss.ios.deployment_target = '9.0'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBid{Banner,Splash,SDK,RewardedVideo,Interstitial,Native}.framework'
    ss.resource = 'HyperBidiOS/HyperBidSDK.bundle'
  end

    spec.subspec 'HyperBidApplovinAdapter' do |ss|
    ss.dependency 'AppLovinSDK','10.3.5'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidApplovinAdapter.framework'
  end

    spec.subspec 'HyperBidGDTAdapter' do |ss|
    ss.dependency 'GDTMobSDK','4.13.11'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidGDTAdapter.framework'
  end

    spec.subspec 'HyperBidPangleAdapter' do |ss|
    ss.dependency 'Ads-Global','3.9.0.4'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidPangleAdapter.framework'
  end

    spec.subspec 'HyperBidTTAdapter' do |ss|
    ss.dependency 'Ads-CN-Beta','4.0.0.0'
    # ss.dependency 'Ads-CN','4.0.0.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidTTAdapter.framework'
  end

    spec.subspec 'HyperBidUnityAdsAdapter' do |ss|
    ss.dependency 'UnityAds','3.7.5'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidUnityAdsAdapter.framework'
  end

    spec.subspec 'HyperBidSigmobAdapter' do |ss|
    ss.dependency 'SigmobAd-iOS','3.2.5'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidSigmobAdapter.framework'
  end

    spec.subspec 'HyperBidKSAdapter' do |ss|
    ss.dependency 'KSAdSDK','3.3.15.1'
    ss.dependency 'SDWebImage'
    ss.dependency 'MJExtension'
    ss.dependency 'AFNetworking'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidKuaiShouAdapter.framework'
  end

    spec.subspec 'HyperBidAdColonyAdapter' do |ss|
    ss.dependency 'AdColony','4.7.2'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidAdColonyAdapter.framework'
  end

    spec.subspec 'HyperBidTapjoyAdapter' do |ss|
    ss.dependency 'TapjoySDK','12.8.1'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidTapjoyAdapter.framework'
  end

    spec.subspec 'HyperBidBaiduAdapter' do |ss|
    ss.dependency 'BaiduMobAdSDK','4.82'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidBaiduAdapter.framework'
  end

    spec.subspec 'HyperBidNendAdapter' do |ss|
    ss.dependency 'NendSDK_iOS','7.0.6'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidNendAdapter.framework'
  end

    spec.subspec 'HyperBidMaioAdapter' do |ss|
    ss.dependency 'MaioSDK','1.5.8'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidMaioAdapter.framework'
  end

    spec.subspec 'HyperBidMyTargetAdapter' do |ss|
    ss.dependency 'myTargetSDK','5.13.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidMyTargetAdapter.framework'
  end

    spec.subspec 'HyperBidFyberAdapter' do |ss|
    ss.dependency 'Fyber_Marketplace_SDK','7.8.9'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidFyberAdapter.framework'
  end

    spec.subspec 'HyperBidChartboostAdapter' do |ss|
    ss.dependency 'ChartboostSDK','8.4.2'
    ss.dependency 'ChartboostHelium','2.3.1'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidChartboostAdapter.framework'
  end

    spec.subspec 'HyperBidStartAppAdapter' do |ss|
    ss.dependency 'StartAppSDK','4.5.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidStartAppAdapter.framework'
  end

    spec.subspec 'HyperBidIronSourceAdapter' do |ss|
    ss.dependency 'IronSourceSDK','7.1.11.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidIronSourceAdapter.framework'
  end

    spec.subspec 'HyperBidInmobiAdapter' do |ss|
    ss.dependency 'InMobiSDK/Core','10.0.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidInmobiAdapter.framework'
  end

    spec.subspec 'HyperBidMintegralAdapter' do |ss|
    ss.dependency 'MintegralAdSDK/All','7.0.3'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidMintegralAdapter.framework'
  end

    spec.subspec 'HyperBidAdmobAdapter' do |ss|
    ss.dependency 'Google-Mobile-Ads-SDK','8.10.0'
    # ss.dependency 'PersonalizedAdConsent'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidAdmobAdapter.framework'
  end

    spec.subspec 'HyperBidFacebookAdapter' do |ss|
    ss.dependency 'FBAudienceNetwork','6.7.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidFacebookAdapter.framework'
  end

    spec.subspec 'HyperBidMopubAdapter' do |ss|
    ss.dependency 'mopub-ios-sdk','5.18.0'
    ss.ios.deployment_target = '10.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidMopubAdapter.framework'
  end

    spec.subspec 'HyperBidKidozAdapter' do |ss|
    ss.dependency 'HyperBidKidozSDK','1.3.6'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidKidozAdapter.framework'
  end

    spec.subspec 'HyperBidOguryAdapter' do |ss|
    ss.dependency 'OguryAds','2.4.1'
    ss.ios.deployment_target = '10.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidOguryAdapter.framework'
  end

    spec.subspec 'HyperBidVungleAdapter' do |ss|
    ss.dependency 'VungleSDK-iOS','6.10.3'
    ss.ios.deployment_target = '10.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidVungleAdapter.framework'
  end

    spec.subspec 'HyperBidKlevinAdapter' do |ss|
    ss.dependency 'HyperBidKlevinSDK','2.1.0'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidKlevinAdapter.framework'
  end

    spec.subspec 'HyperBidPangleGlobalAdapter' do |ss|
    ss.dependency 'Ads-CN-Beta','4.0.0.0'
    ss.dependency 'Ads-CN-Beta/International','4.0.0.0'
    # ss.dependency 'Ads-CN','3.9.0.4'
    # ss.dependency 'Ads-CN/International','3.9.0.4'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'HyperBidiOS/HyperBidSDK'
    ss.vendored_frameworks = 'HyperBidiOS/HyperBidPangleAdapter.framework','HyperBidiOS/HyperBidTTAdapter.framework'
  end

end
