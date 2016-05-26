#pragma once

#include "Dialogue.h"

class Bard : public Dialogue
{
public:
	Bard();
	~Bard();

	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

