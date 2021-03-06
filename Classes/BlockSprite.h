//
//  BlockSprite.h
//  nyangame
//
//  Created by nishihara on 13/09/06.
//
//

#ifndef __nyangame__BlockSprite__
#define __nyangame__BlockSprite__

//#include <iostream>
#include "cocos2d.h"
#include "Config.h"

class BlockSprite : public cocos2d::CCSprite
{
protected:
    const char* getBlockImageFileName(kBlock blockType);
    
public:
    CC_SYNTHESIZE_READONLY(kBlock, m_blockType, BlockType);
    
    BlockSprite();
    virtual ~BlockSprite();
    virtual bool initWithBlockType(kBlock blockType);
    static BlockSprite* createWithBlockType(kBlock blockType);
};


#endif /* defined(__nyangame__BlockSprite__) */
