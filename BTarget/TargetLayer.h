//
//  TargetLayer.h
//  BTarget
//
//  Created by Robert Lane on 12/9/12.
//  Copyright 2012 Fluid Apps LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"
#import "BTargetSprite.h"

@interface TargetLayer : CCLayer { 
    BTargetSprite * _target;
    BTargetSprite * _decoy;
    CCSprite *_prop;
    CGPoint _targetDirection;
    NSMutableDictionary *_animDictionary;
    CCSprite *_bullseyeAnimation;
    CCSprite *_hitAnimation;
    CCSprite *_decoyAnimation;
    CCAction *_showAction;
    BOOL _displayed;
    BOOL _destroyed;
    BOOL _isDecoy;
    int _decoyWeight;
}
-(void) setTarget:(BTargetSprite*) target;
-(BTargetSprite*) getTarget;
-(void) setDecoy:(BTargetSprite*) decoy;
-(BTargetSprite*) getDecoy;
-(void) setProp:(CCSprite*) prop;
-(CCSprite*) getProp;
-(BOOL) isDisplayed;
-(BOOL) isDestroyed;
-(BOOL) isDecoy;

-(id) initWithProp:(CCSprite*)prop target:(BTargetSprite*)target andDecoy:(BTargetSprite*)decoy;

//Show a random target in a random area
-(void) showTargetForTime:(ccTime)time atSpeed:(float) speed;

@end
