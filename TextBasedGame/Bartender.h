#pragma once

#include "Player.h"

class Bartender
{
public:
	Bartender();
	~Bartender();

	void Dialogue(Player *p);

	int result;
};

