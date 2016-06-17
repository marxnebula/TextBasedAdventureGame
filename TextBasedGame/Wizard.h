#pragma once

#include "Dialogue.h"

class Wizard : public Dialogue
{
public:
	Wizard();
	~Wizard();

	// The responses to user input
	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

