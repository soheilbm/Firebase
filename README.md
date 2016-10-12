# WARNING

Unofficial Firebase for Carthage.

----

# Firebase
[![Carthage compatible](https://img.shields.io/badge/Carthage-compatible-4BC51D.svg?style=flat)](https://github.com/Carthage/Carthage)

## Usage
The iOS Example file is a sample of using core firebase (analytics). 

You need to add <b>GoogleService info plist</b> to your main project. (iOS Example project also needs Googleservice info plist)

## Installation

### Carthage

[Carthage](https://github.com/Carthage/Carthage) is a decentralized dependency manager that builds your dependencies and provides you with binary frameworks.

You can install Carthage with [Homebrew](http://brew.sh/) using the following command:

```bash
$ brew update
$ brew install carthage
```

To integrate Firebase into your Xcode project using Carthage, specify it in your `Cartfile`:

```ogdl
github "soheilbm/Firebase" ~> 3.6.0
```

Run `carthage update` to build the framework and drag the built `Firebase.framework` into your Xcode project.

- Add the -ObjC flag to "Other Linker Settings"
- Turn on ALWAYS_EMBED_SWIFT_STANDARD_LIBRARIES in your build settings.
- Drag each framework from the directory named after the SDK into the Project
   Navigator pane. Note that there may be no additional frameworks, in which
   case this directory will be empty. For instance, if you want the Database
   SDK, look in the Database folder for the required frameworks. In the dialog
   box that appears, make sure the target you want this framework to be added to
   has a checkmark next to it, and that you've selected "Copy items if needed.


"(~> X)" below means that the SDK requires all of the frameworks from X. You
should make sure to include all of the frameworks from X when including the SDK.

#### Analytics
  - FirebaseAnalytics.framework
  - FirebaseInstanceID.framework
  - GoogleInterchangeUtilities.framework
  - GoogleSymbolUtilities.framework
  - GoogleUtilities.framework
  
#### AdMob (~> Analytics)
  - GoogleMobileAds.framework
 
#### AppIndexing (~> Analytics)
  - FirebaseAppIndexing.framework
  
#### Auth (~> Analytics)
  - FirebaseAuth.framework
  - GoogleNetworkingUtilities.framework
  
#### Crash (~> Analytics)
  - FirebaseCrash.framework
  
#### Database (~> Analytics)
  - FirebaseDatabase.framework
  
#### DynamicLinks (~> Analytics)
  - FirebaseDynamicLinks.framework
  
#### Invites (~> Analytics)
  - FirebaseDynamicLinks.framework
  - FirebaseInvites.framework
  - GoogleAppUtilities.framework
  - GoogleAuthUtilities.framework
  - GoogleNetworkingUtilities.framework
  - GoogleParsingUtilities.framework
  - GooglePlusUtilities.framework
  - GoogleSignIn.framework

  You'll also need to add the resources in the
  Resources directory into your target's main
  bundle.
  
#### Messaging (~> Analytics)
  - FirebaseMessaging.framework
  - GoogleIPhoneUtilities.framework
  
#### RemoteConfig (~> Analytics)
  - FirebaseRemoteConfig.framework
  - GoogleIPhoneUtilities.framework
  
#### Storage (~> Analytics)
  - FirebaseStorage.framework
  - GoogleNetworkingUtilities.framework
  


### Current Version of Firebase libraries

           CocoaPod           | Version
----------------------------- | -------
Firebase                      | 3.6.0
FirebaseAnalytics             | 3.4.2
FirebaseAppIndexing           | 1.1.0
FirebaseAuth                  | 3.0.5
FirebaseCrash                 | 1.0.7
FirebaseDatabase              | 3.0.3
FirebaseDynamicLinks          | 1.3.0
FirebaseInstanceID            | 1.0.8
FirebaseInvites               | 1.2.1
FirebaseMessaging             | 1.2.0
FirebaseRemoteConfig          | 1.3.0
FirebaseStorage               | 1.0.3
Google-Mobile-Ads-SDK         | 7.11.0
GoogleAppUtilities            | 1.1.1
GoogleAuthUtilities           | 2.0.1
GoogleIPhoneUtilities         | 1.2.1
GoogleInterchangeUtilities    | 1.2.1
GoogleNetworkingUtilities     | 1.2.1
GoogleParsingUtilities        | 1.1.1
GooglePlusUtilities           | 1.1.1
GoogleSignIn                  | 4.0.0
GoogleSymbolUtilities         | 1.1.1
GoogleUtilities               | 1.3.1


## Author

Soheil B.Marvasti


## License

I do not own this project.
