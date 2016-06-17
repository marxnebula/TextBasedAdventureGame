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
#include "Bartender.h"

using namespace std;


// Game State enum
enum GameState { front, upstairs, pub, ending };

// Start in the front
GameState gameState = front;

// Main player
Player player;

// Upstairs wizard
UpstairsWizard upstairsWizard;

// Bartender
Bartender bartender;

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


// User result for enterance
int resultEnterance;

// User result for upstairs
int resultUpstairs;

// User result for pub
int resultPub;

// Counter to keep track how many times you went to the back door
int backDoorCounter = 0;

// Boolean for if displaying dialogue
bool isDialogue = false;


/*
 * This is the initial update.
 * Update for when the user is in front of the pub.
 */
void UpdateFront()
{
	// If gamestate is front
	if (gameState == front)
	{
		// Display msg
		cout << "How would you like to enter the Pub? \n";
		cout << "1 - Through the front door \n";
		cout << "2 - Look for a back door \n";
		cout << "3 - Climb the building and enter through an upstairs window \n";

		// Get input
		cin >> resultEnterance;

		// If result is 1
		if (resultEnterance == 1)
		{
			// Enter the pub
			// Display msg
			cout << "You open the front door \n";

			// Set the gamestate to pub
			gameState = pub;
		}
		// If the result is 2
		else if (resultEnterance == 2)
		{
			// If backdoor counter is 0
			if (backDoorCounter == 0)
			{
				// Display msg
				cout << "You find no back door.  You look extremely suspicious as you walk back to the front.  \n";
			}
			// If backdoor counter is 1
			else if (backDoorCounter == 1)
			{
				// Display msg
				cout << "You find no back door.  You start to feel like a fool.  \n";
			}
			else
			{
				// Display msg
				cout << "As you find no back door again, you start to question why the King hired you. \n";
			}

			// Add 1 to backDoorCounter
			backDoorCounter++;
		}
		// If the result is 3
		else if (resultEnterance == 3)
		{
			// Display msg
			// Climb the building
			cout << "You miraculously climb up the building and enter through a window \n";

			// Set the gamestate to upstairs
			gameState = upstairs;
		}
		// If all other results
		else
		{
			// Display msg
			cout << resultEnterance << " isn't a choice! \n";
		}

	}
}

/*
 * Update for when the user is upstairs.
 */
void UpdateUpstairs()
{
	// If the gamestate is upstairs
	if (gameState == upstairs)
	{
		// Display msg
		cout << "What do you wish to do? \n";
		cout << "1 - Search the bed \n";
		cout << "2 - Search the cabinet \n";
		cout << "3 - Escape through the window \n";
		cout << "4 - Go downstairs \n";

		// Set result
		cin >> resultUpstairs;


		// If the result is 1
		if (resultUpstairs == 1)
		{
			// Display msg
			cout << "You wake up a wizard with a giant beard.  \n";
			cout << "Wizard: ZzzZz... Wha... Why are you in my room? \n";

			// Call the function D from upstairsWizard
			upstairsWizard.D(&player);
		}
		// If the result is 2
		else if (resultUpstairs == 2)
		{
			// Display msg
			cout << "You find a gray robe with a blue hat.  \n";
		}
		// If the result is 3
		else if (resultUpstairs == 3)
		{
			// Display msg
			cout << "You succesfully climb down to the entrance of the Pub.  \n";

			// Set the gamestate to front
			gameState = front;
		}
		// If the result is 4
		else if (resultUpstairs == 4)
		{
			// Display msg
			cout << "You slowly open the door and walk downstairs.  \n";

			// Set the gamestate to pub
			gameState = pub;
		}
	}
}

/*
 * Update for when user is in the pub.
 */
void UpdatePub()
{
	// If the gamestate is pub
	if (gameState == pub)
	{
		// Display the mercenary option msg
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

		// Set the result
		cin >> resultPub;

		// If the result is 1
		if (resultPub == 1)
		{
			// Bartender
			bartender.Dialogue(&player);
		}
		// If the result is 2
		else if (resultPub == 2)
		{
			// White Knight
			whiteKnight.TalkMenu(&player);
		}
		// If the result is 3
		else if (resultPub == 3)
		{
			// Wizard
			wizard.TalkMenu(&player);
		}
		// If the result is 4
		else if (resultPub == 4)
		{
			// Rogue
			rogue.TalkMenu(&player);
		}
		// If the result is 5
		else if (resultPub == 5)
		{
			// Warrior
			warrior.TalkMenu(&player);
		}
		// If the result is 6
		else if (resultPub == 6)
		{
			// Ranger
			ranger.TalkMenu(&player);
		}
		// If the result is 7
		else if (resultPub == 7)
		{
			// Priest
			priest.TalkMenu(&player);
		}
		// If the result is 8
		else if (resultPub == 8)
		{
			// Monk
			monk.TalkMenu(&player);
		}
		// If the result is 9
		else if (resultPub == 9)
		{
			// Druid
			druid.TalkMenu(&player);
		}
		// If the result is 10
		else if (resultPub == 10)
		{
			// Bard
			bard.TalkMenu(&player);
		}
		// If the result is 11
		else if (resultPub == 11)
		{
			// Dark Knight
			darkKnight.TalkMenu(&player);
		}
		// All other results
		else
		{
			// Display msg
			cout << resultPub << " isn't a choice! \n";
		}

	}
}

/*
 * Update for the outcome of the user at the end.
 */
void UpdateEnd()
{
	// If the gamestate is ending
	if (gameState == ending)
	{

	}
}


/*
 * Main.
 */
int main() {

	// Introduction. Explain your mission
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
	bartender = Bartender();
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


	// Infinite loop
	while (1)
	{
		// Update for the front
		UpdateFront();
		
		// Update for the upstairs
		UpdateUpstairs();

		// Update for the pub
		UpdatePub();

		// Update for the end
		UpdateEnd();

	}

	// Return 0
	return 0;
}



