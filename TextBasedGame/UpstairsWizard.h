#pragma once

#include "Player.h"
#include "Dialogue.h"

class UpstairsWizard
{
public:
	UpstairsWizard();
	~UpstairsWizard();

	void D(Player *p);

	bool isUniqueDialogue;

	int result;

	string gameState;

	void FirstResponse();
	void SecondResponse();
	void ThirdResponse();
	void FourthResponse();
	void FifthResponse();
	void SixthResponse();
};

