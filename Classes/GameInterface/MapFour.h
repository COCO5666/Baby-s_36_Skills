﻿#pragma execution_character_set("utf-8")
#pragma once

#include "QE.h"

class MapFour :public Layer
{
public:
	static Scene * createScene();
    virtual bool init();
	CREATE_FUNC(MapFour);
	void backTwo();
private:
	Sprite* hero;
	bool HeroDirecton;
};
class HrockerLayer4:public Layer
{
public:
	static Scene * createScene();
    virtual bool init();
	CREATE_FUNC(HrockerLayer4);

};

