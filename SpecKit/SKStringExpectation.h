#import <Foundation/Foundation.h>

#import <SpecKit/SKExpectation.h>

@interface SKStringExpectation : SKExpectation

@property (readwrite, assign) NSString* string;

+ (SKStringExpectation*(^)(NSString*)) expectationFunctionInFile:(char*)file
                                                            line:(int)line
                                                 failureReporter:(id<SKFailureReporter>)reporter;

- (void) toContain:(NSString*)substring;
- (void) toStartWith:(NSString*)substring;

@end

#define expectStr [SKStringExpectation expectationFunctionInFile:__FILE__ line:__LINE__ failureReporter:self]
