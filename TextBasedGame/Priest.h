#pragma once

#include "Dialogue.h"

class Priest : public Dialogue
{
public:
	Priest();
	~Priest();

	// The responses to user input
	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

