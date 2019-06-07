#pragma once

#include "QE.h"

class HttpTest : public cocos2d::Layer
{
	QE_CreateSceneFromLayer_H(HttpTest);
	static LabelTTF* label;
	// 请求方法
	void postHttpRequest();
	// 请求完成的回调方法
	void onHttpRequestCompleted(HttpClient* sender, HttpResponse* response);

};