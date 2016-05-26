#pragma once

#include "Dialogue.h"

class Warrior : public Dialogue
{
public:
	Warrior();
	~Warrior();

	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

