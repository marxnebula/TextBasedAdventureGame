#include "stdafx.h"
#include "Bartender.h"
#include <string>
#include <iostream>

using namespace std;

Bartender::Bartender()
{
}


Bartender::~Bartender()
{
}

void Bartender::Dialogue(Player *p)
{
	// Bartender speak
	cout << "I'm the Bartender \n";

	// Keep looping until result is not equal to 5
	while (result != 5)
	{
		// Display msg
		cout << "What do you say? \n";
		cout << "1 - I'll take a small milk, sir \n";
		cout << "2 - Give me something strong \n";
		cout << "3 - What do you know about Dragons? \n";
		cout << "4 - Do you recommend any mercenary here for killing an Ice Dragon? \n";
		cout << "5 - EXIT \n";

		// Set the result
		cin >> result;

		// If the result is 1
		if (result == 1)
		{
			// Display msg
			cout << "Bartender: Not only do you want milk, but you desire it small?  We don't carry that here. \n";
		}
		// If the result is 2
		else if (result == 2)
		{
			// Display msg
			cout << "Bartender: Strong you say?  Here's something strong for you... heh.. \n";
			cout << "The bartender pours you a pint of some brown liquid. \n";
			cout << "You chug the drink and start to feel tipsy.  The bartender never asks you to pay. \n";
		}
		// If the result is 3
		else if (result == 3)
		{
			// Display msg
			cout << "Bartender: Never seen one and I hope never will!  \n";
			cout << "My crazy old grandpa used to say Silver Arrows were the key to killing any dragon. \n";
			cout << "But, I wouldn't trust much he says. \n";
		}
		// If the result is 4
		else if (result == 4)
		{
			// Display msg
			cout << "Bartender: If you be looking for someone to take a dragon down, then my money be on him! \n";
			cout << "The White Knight talks all day of his victorious battles with these things called dragons. \n";
		}
		// If the result is not 5
		else if (result != 5)
		{
			// Display msg
			cout << result << " isn't a choice! \n";
		}
	}
}
