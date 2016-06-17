#pragma once

#include "Dialogue.h"

class Rogue : public Dialogue
{
public:
	Rogue();
	~Rogue();

	// The responses to user input
	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

