#pragma once

#include "Dialogue.h"

class Druid : public Dialogue
{
public:
	Druid();
	~Druid();

	// The responses to user input
	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

