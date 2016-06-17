#pragma once

#include "Dialogue.h"

class Ranger : public Dialogue
{
public:
	Ranger();
	~Ranger();

	// The responses to user input
	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

