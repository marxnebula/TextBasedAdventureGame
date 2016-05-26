#include "stdafx.h"
#include "Player.h"
#include <string>
#include <iostream>

using namespace std;



Player::Player()
{

}

Player::Player(string n)
{
	this->name = n;
	string hired[] = { " ", " " };
	isHiredAll = false;
	cout << this->name << " is your name" << endl;
}


Player::~Player()
{
}

void Player::Hire(string hire)
{
	if (hired[0] == " ")
	{
		hired[0] = hire;
	}
	else
	{
		hired[1] = hire;
		isHiredAll = true;
	}
}

