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
	// Set the name
	this->name = n;

	// String to store who user hired
	string hired[] = { " ", " " };

	// Boolean for once everyone is hired
	isHiredAll = false;

	// Display your name
	cout << this->name << " is your name" << endl;
}


Player::~Player()
{
}

/*
 * Function for determining who you hired.
 * Store the first perosn you hire.  Once the first idex has a string then add to the second index,
 * and set the isHiredAll boolena to true.
 */
void Player::Hire(string hire)
{
	// If hired[0] is empty
	if (hired[0] == " ")
	{
		// Store the hire name
		hired[0] = hire;
	}
	else
	{
		// Store the hire name
		hired[1] = hire;

		// Set boolean to true
		isHiredAll = true;
	}
}

