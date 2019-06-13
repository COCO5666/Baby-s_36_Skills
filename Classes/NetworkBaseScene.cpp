﻿#pragma execution_character_set("utf-8")

#include "NetworkBaseScene.h"

Label* NetworkBaseScene::_label, * NetworkBaseScene::_logLabel;
EditBox* NetworkBaseScene::_box;

void NetworkBaseScene::dealServerResponse(int statusCode)
{
	_logLabel->setString(GetConnectStatusByCode(statusCode));
}