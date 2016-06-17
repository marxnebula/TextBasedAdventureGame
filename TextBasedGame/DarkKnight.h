#pragma once

#include "Dialogue.h"

class DarkKnight : public Dialogue
{
public:
	DarkKnight();
	~DarkKnight();

	// The responses to user input
	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

