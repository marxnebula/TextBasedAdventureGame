// TextBasedGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Player.h"
#include "UpstairsWizard.h"
#include "WhiteKnight.h"
#include "Wizard.h"
#include "Rogue.h"
#include "Warrior.h"
#include "Ranger.h"
#include "Priest.h"
#include "Monk.h"
#include "Druid.h"
#include "Bard.h"
#include "DarkKnight.h"

using namespace std;


// Game State enum
enum GameState { front, upstairs, pub, ending };

// Start in the front
GameState gameState = front;

// Main player
Player player;

// Upstairs wizard
UpstairsWizard upstairsWizard;

// Hire characters in Pub
WhiteKnight whiteKnight;
Wizard wizard;
Rogue rogue;
Warrior warrior;
Ranger ranger;
Priest priest;
Monk monk;
Druid druid;
Bard bard;
DarkKnight darkKnight;


// Enterance to the pub (0 = front door, 1 = back door, 2 = upstairs window)
int resultEnterance;
int resultUpstairs;
int resultInn;

int backDoorCounter = 0;

bool isDialogue = false;


void UpdateFront()
{
	if (gameState == front)
	{
		cout << "How would you like to enter the Inn? \n";
		cout << "1 - Through the front door \n";
		cout << "2 - Look for a back door \n";
		cout << "3 - Climb the building and enter through an upstairs window \n";

		cin >> resultEnterance;

		if (resultEnterance == 1)
		{
			cout << "You open the front door \n";
			gameState = pub;
		}
		else if (resultEnterance == 2)
		{
			if (backDoorCounter == 0)
			{
				cout << "You find no back door.  You look extremely suspicious as you walk back to the front.  \n";
			}
			else if (backDoorCounter == 1)
			{
				cout << "You find no back door.  You start to feel like a fool.  \n";
			}
			else
			{
				cout << "As you find no back door again, you start to question why the King hired you. \n";
			}

			backDoorCounter++;
		}
		else if (resultEnterance == 3)
		{
			cout << "You miraculously climb up the building and enter through a window \n";
			gameState = upstairs;
		}
		else
		{
			cout << resultEnterance << " isn't a choice! \n";
		}

	}
}

void UpdateUpstairs()
{
	if (gameState == upstairs)
	{
		cout << "What do you wish to do? \n";
		cout << "1 - Search the bed \n";
		cout << "2 - Search the cabinet \n";
		cout << "3 - Escape through the window \n";
		cout << "4 - Go downstairs \n";

		cin >> resultUpstairs;



		if (resultUpstairs == 1)
		{
			cout << "You wake up a wizard with a giant beard.  \n";
			cout << "Wizard: ZzzZz... Wha... Why are you in my room? \n";

			upstairsWizard.D(player);


		}
		else if (resultUpstairs == 2)
		{
			cout << "You find a gray robe with a blue hat.  \n";
		}
		else if (resultUpstairs == 3)
		{
			cout << "You succesfully climb down to the entrance of the Inn.  \n";
			gameState = front;
		}
		else if (resultUpstairs == 4)
		{
			cout << "You slowly open the door and walk downstairs.  \n";
			gameState = pub;
		}
	}
}

void UpdatePub()
{
	if (gameState == pub)
	{
		cout << "Who do you wish to speak with? \n";
		cout << "1 - Bartender \n";
		cout << "2 - White Knight \n";
		cout << "3 - Wizard \n";
		cout << "4 - Rogue \n";
		cout << "5 - Warrior \n";
		cout << "6 - Ranger \n";
		cout << "7 - Priest \n";
		cout << "8 - Monk \n";
		cout << "9 - Druid \n";
		cout << "10 - Bard \n";
		cout << "11 - Dark Knight \n";

		cin >> resultInn;


		if (resultInn == 1)
		{
			// Bartender
		}
		else if (resultInn == 2)
		{
			whiteKnight.TalkMenu(&player);
		}
		else if (resultInn == 3)
		{
			wizard.TalkMenu(&player);
		}
		else if (resultInn == 4)
		{
			rogue.TalkMenu(&player);
		}
		else if (resultInn == 5)
		{
			warrior.TalkMenu(&player);
		}
		else if (resultInn == 6)
		{
			ranger.TalkMenu(&player);
		}
		else if (resultInn == 7)
		{
			priest.TalkMenu(&player);
		}
		else if (resultInn == 8)
		{
			monk.TalkMenu(&player);
		}
		else if (resultInn == 9)
		{
			druid.TalkMenu(&player);
		}
		else if (resultInn == 10)
		{
			bard.TalkMenu(&player);
		}
		else if (resultInn == 11)
		{
			darkKnight.TalkMenu(&player);
		}
		else
		{
			cout << resultInn << " isn't a choice! \n";
		}

	}
}

void UpdateEnd()
{
	if (gameState == ending)
	{

	}
}


int main() {

	// Introduction. Explain your mission (Oh, I almost forgot! What is your name?)
	cout << "Hello, Adventurer! \nPlease enter your name: ";


	// Players name to be entered
	string playersName;

	// So you get an entire line from cin
	getline(cin, playersName);

	// Print the name
	cout << "Hello " << playersName << ".\n";

	// Create the player
	player = Player(playersName);

	// Create the characters
	upstairsWizard = UpstairsWizard();
	whiteKnight = WhiteKnight();
	wizard = Wizard();
	rogue = Rogue();
	warrior = Warrior();
	ranger = Ranger();
	priest = Priest();
	monk = Monk();
	druid = Druid();
	bard = Bard();
	darkKnight = DarkKnight();


	while (1)
	{

		UpdateFront();
		
		UpdateUpstairs();

		UpdatePub();

		UpdateEnd();

	}

	



	return 0;
}



