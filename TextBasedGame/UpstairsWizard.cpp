#include "stdafx.h"
#include "UpstairsWizard.h"
#include <string>
#include <iostream>

using namespace std;


UpstairsWizard::UpstairsWizard()
{
	// Set boolean to true
	isUniqueDialogue = true;
}


UpstairsWizard::~UpstairsWizard()
{
}


/*
 * Dialogue between the upstairs wizard and the user.
 */
void UpstairsWizard::D(Player *p)
{
	// Loop until isUniqueDialogue is false
	while (isUniqueDialogue)
	{
		// Display msg
		cout << "What do you say? \n";
		cout << "1 - Hello! My name is " << p->name << " \n";
		cout << "2 - I came in through the window \n";
		cout << "3 - I'm looking to hire mercenaries to help me kill a Ice Dragon. \n";
		cout << "4 - Escape through the window \n";
		cout << "5 - Go downstairs \n";

		// Set the result
		cin >> result;

		// If the result is 1
		if (result == 1)
		{
			// Display msg
			cout << "Wizard: Hello, " << p->name << "! My name is Garret Stormbird /n";
		}
		// If the result is 2
		else if (result == 2)
		{
			// Display msg
			cout << "Wizard: That is very odd.  My name is Garret Stormbird!  What is yours? /n";
		}
		// If the result is 3
		else if (result == 3)
		{
			// Display msg
			cout << "Wizard: I see... Well I am too old for such an adventure, but I will give you a tip about dragons. /n";
			cout << "BARD SONG TIP /n";
		}
		// If the result is 4
		else if (result == 4)
		{
			// Display msg
			cout << "Wizard: Where are you going? \n";
			cout << "You succesfully climb down to the entrance of the Inn.  \n";

			// Set the gamestate to front
			gameState = "front";

			// Set the boolean to false
			isUniqueDialogue = false;
		}
		// If the result is 5
		else if (result == 5)
		{
			// Display msg
			cout << "Wizard:  \n";
			cout << "You slowly open the door and walk downstairs.  \n";

			// Set the gamestate to pub
			gameState = "pub";

			// Set the boolean to false
			isUniqueDialogue = false;
		}
		// If the result is anything else
		else
		{
			// Display msg
			cout << result << " isn't a choice! \n";
		}
	}

	
}


