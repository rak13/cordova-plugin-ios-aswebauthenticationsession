# cordova-plugin-ios-aswebauthenticationsession-api
Cordova Plugin for iOS 12 ASWebAuthenticationSession API. Originally forked from [rak13/cordova-plugin-ios-aswebauthenticationsession](https://github.com/rak13/cordova-plugin-ios-aswebauthenticationsession) and updated to address an [issue](https://github.com/rak13/cordova-plugin-ios-aswebauthenticationsession/issues/1) present after updating to iOS 13.

## usage
    window.plugins.ASWebAuthSession.start("myappurlscheme://dummy/staff", 'https://linktoopen.someplace.com/index.html',
    function(msg){
      console.log("Success ", msg);
    }, function (err) {
        console.log("Error " + msg);
    });

#### Additional information

iOS 13 introduced a requirement that ASWebAuthenticationSession needs a [presentationContextProvider](https://developer.apple.com/documentation/authenticationservices/aswebauthenticationsession/3237232-presentationcontextprovider) to provide a "display context in which the system can present an authentication session to the user."

The changes in this plugin should address an error that was thrown when trying to use ASWebAuthenticationSession after updating to iOS 13:
"Cannot start ASWebAuthenticationSession without providing presentation context. Set presentationContextProvider before calling -start."
