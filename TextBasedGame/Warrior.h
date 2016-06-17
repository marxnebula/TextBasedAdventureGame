#pragma once

#include "Dialogue.h"

class Warrior : public Dialogue
{
public:
	Warrior();
	~Warrior();

	// The responses to user input
	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

