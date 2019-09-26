#import <Cordova/CDVPlugin.h>
#import <AuthenticationServices/AuthenticationServices.h>

@interface ASWebAuthSession : CDVPlugin<ASWebAuthenticationPresentationContextProviding> {
}

// The hooks for our plugin commands
- (void)start:(CDVInvokedUrlCommand *)command;

@end
