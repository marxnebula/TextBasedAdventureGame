#pragma once

#include <string>
#include "Player.h"

using namespace std;

class Dialogue
{
public:
	virtual ~Dialogue();

	string name;

	int result = 0;

	void TalkMenu(Player * p);

	virtual void FirstResponse() = 0;
	virtual void SecondResponse() = 0;
	virtual void ThirdResponse() = 0;
	virtual void FourthResponse() = 0;
	virtual void FifthResponse() = 0;
	virtual void SixthResponse() = 0;


};

