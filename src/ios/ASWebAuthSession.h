#import <Cordova/CDVPlugin.h>

@interface ASWebAuthSession : CDVPlugin {
}

// The hooks for our plugin commands
- (void)start:(CDVInvokedUrlCommand *)command;

@end
