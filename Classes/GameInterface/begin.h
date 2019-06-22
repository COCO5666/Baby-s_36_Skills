﻿#pragma execution_character_set("utf-8")
#pragma once

#include "QE.h"

class begin :public Layer
{
public:
    static Scene * createScene();
    virtual bool init();
	CREATE_FUNC(begin);
	void startScene();
	void setLayer();
	void setMusic(Ref* sender);
	void setBack();
	void setEffect(Ref* sender);
	void adjustVolumn(Ref * sender);
	void startAnimate();
	void enterMap();
	void enterNet();
	void end();
	Menu* set;
private:
	Sprite* setBg;
	Size size;
};

