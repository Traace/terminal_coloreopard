#import <Cocoa/Cocoa.h>

@interface TCLANSIColors : NSObject {
	NSColor *blackColor;
	NSColor *redColor;
	NSColor *greenColor;
	NSColor *yellowColor;
	NSColor *blueColor;
	NSColor *magentaColor;
	NSColor *cyanColor;
	NSColor *whiteColor;
}
+(TCLANSIColors *)defaultANSIColors;
+(TCLANSIColors *)fromDictionary:(NSDictionary *)aDictionary;
+(NSArray *)ansiColorNames;
-(id)init;
-(NSDictionary *)ansiColorsAsDictionary;
-(NSColor *)colorFor:(unsigned int)code;
@end
