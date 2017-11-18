#pragma once
#include "cocos2d.h"
USING_NS_CC;

#define _BULLET_H

class Bullet :
	public CCNode
{
public:
	Bullet(void);
	virtual ~Bullet(void);
	CREATE_FUNC(Bullet);
	bool init();

protected:
	float getSpeed(int type);
	CCSprite* _bulletSprite;
};
