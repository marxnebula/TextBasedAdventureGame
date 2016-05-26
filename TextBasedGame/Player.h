#pragma once

#include <string>

using namespace std;


class Player
{

public:

	string name;
	string hired[2];

	Player();
	Player(string n);
	~Player(void);

	void Hire(string hire);
	int result;
	bool isHiredAll;
};

