#pragma once

#include "Dialogue.h"


class WhiteKnight : public Dialogue
{
public:
	WhiteKnight();
	~WhiteKnight();

	// The responses to user input
	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

