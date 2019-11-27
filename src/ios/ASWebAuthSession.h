#import <Cordova/CDVPlugin.h>
#import <AuthenticationServices/AuthenticationServices.h>

API_AVAILABLE(ios(12.0))
@interface ASWebAuthSession : CDVPlugin<ASWebAuthenticationPresentationContextProviding> {
}

- (void)start:(CDVInvokedUrlCommand *)command;

- (void)appIsActive;

@end
