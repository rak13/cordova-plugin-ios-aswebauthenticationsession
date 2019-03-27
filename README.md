# cordova-plugin-ios-aswebauthenticationsession
Cordova Plugin for iOS 12 ASWebAuthenticationSession API


----
## usage
    window.plugins.ASWebAuthSession.start("myappurlscheme://dummy/staff", 'https://linktoopen.someplace.com/index.html',
    function(msg){
      console.log("Success ", msg);
    }, function (err) {
        console.log("Error " + msg);
    });