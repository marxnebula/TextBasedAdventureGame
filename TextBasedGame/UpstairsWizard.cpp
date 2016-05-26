#include "stdafx.h"
#include "UpstairsWizard.h"
#include <string>
#include <iostream>

using namespace std;


UpstairsWizard::UpstairsWizard()
{
	isUniqueDialogue = true;
}


UpstairsWizard::~UpstairsWizard()
{
}

void UpstairsWizard::FirstResponse()
{
	cout << "First answer \n";
}

void UpstairsWizard::SecondResponse()
{
	cout << "Second answer \n";
}

void UpstairsWizard::ThirdResponse()
{
	cout << "Third answer \n";
}

void UpstairsWizard::FourthResponse()
{
	cout << "Fourth answer \n";
}

void UpstairsWizard::FifthResponse()
{
	cout << "Fifth answer \n";
}

void UpstairsWizard::SixthResponse()
{
	cout << "Sixth answer \n";
}

void UpstairsWizard::D(Player *p)
{
	while (isUniqueDialogue)
	{
		
		cout << "What do you say? \n";
		cout << "1 - Hello! My name is " << p->name << " \n";
		cout << "2 - I came in through the window \n";
		cout << "3 - I'm looking to hire mercenaries to help me kill a Ice Dragon. \n";
		cout << "4 - Escape through the window \n";
		cout << "5 - Go downstairs \n";

		cin >> result;

		if (result == 1)
		{
			cout << "Wizard: Hello, " << p->name << "! My name is Garret Stormbird /n";

		}
		else if (result == 2)
		{
			cout << "Wizard: That is very odd.  My name is Garret Stormbird!  What is yours? /n";

		}
		else if (result == 3)
		{
			cout << "Wizard: I see... Well I am too old for such an adventure, but I will give you a tip about dragons. /n";
			cout << "BARD SONG TIP /n";
			

		}
		else if (result == 4)
		{
			cout << "Wizard: Where are you going? \n";
			cout << "You succesfully climb down to the entrance of the Inn.  \n";
			gameState = "front";
			isUniqueDialogue = false;
		}
		else if (result == 5)
		{
			cout << "Wizard:  \n";
			cout << "You slowly open the door and walk downstairs.  \n";
			gameState = "inn";
			isUniqueDialogue = false;
		}
		else
		{
			cout << result << " isn't a choice! \n";
		}
	}

	
}


