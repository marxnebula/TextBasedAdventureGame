#pragma once

#include "Dialogue.h"

class Monk : public Dialogue
{
public:
	Monk();
	~Monk();

	// The responses to user input
	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

