#import <Foundation/Foundation.h>

#import <OCDSpec2/SKExpectation.h>

@interface SKFloatExpectation : SKExpectation

@property (readwrite, assign) double number;

- (SKFloatExpectation*(^)(double)) withFloat;

- (void) toBe:(double)other withPrecision:(double)precision;

@end

#define ExpectFloat [[SKFloatExpectation expectationInFile:__FILE__ line:__LINE__ failureReporter:self] withFloat]