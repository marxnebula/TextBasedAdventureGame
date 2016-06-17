#pragma once

#include "Dialogue.h"

class Bard : public Dialogue
{
public:
	Bard();
	~Bard();

	// The responses to user input
	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

