//
//  TextToSpeech.h
//  TextToSpeech
//
//  Created by Anton Krasovsky on 27/09/2016.
//  Copyright © 2016 Anton Krasovsky. All rights reserved.
//

#import "RCTBridgeModule.h"
#import "RCTEventEmitter.h"

@protocol TextToSpeechDelegate <NSObject>

-(void)willBeginSpeakingWithOptions:(NSDictionary *)options;

@end

@import AVFoundation;

@interface TextToSpeech : RCTEventEmitter <RCTBridgeModule, AVSpeechSynthesizerDelegate>
+(TextToSpeech *)getInstance;
+(void)registerDelegate:(NSObject <TextToSpeechDelegate> *)delegate;
-(void) pause;
-(void) resume;
-(void) toggle;
@property (nonatomic, strong) AVSpeechSynthesizer *synthesizer;
@property (nonatomic, strong) AVSpeechSynthesisVoice *defaultVoice;
@end
