#include "stdafx.h"
#include "Dialogue.h"
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;



Dialogue::~Dialogue()
{
}

/*
 * Dialogue menu that is displayed for user
 */
void Dialogue::TalkMenu(Player * p)
{
	// Display msg
	cout << "Hello, "<< name <<  "! I am " << p->name << " from the Candy Kingdom. \n";
	cout << "The King has hired me to find mercenaries to destroy of the Ice Dragon that curses our Kingdom. \n";
	cout << "Before I choose to hire you, I must ask thy some questions. \n";

	// Keep looping if the result is not 8
	while (result != 8)
	{
		// Display msg
		cout << "What do you say? \n";
		cout << "1 - Who are you? \n";
		cout << "2 - Where do you hail from? \n";
		cout << "3 - Have you heard about the Ice Dragon that dwells to the North? \n";
		cout << "4 - What is your weapon of choice? \n";
		cout << "5 - What special skills do you have? \n";
		cout << "6 - How would you fare in a fight against a Dragon? \n";
		cout << "7 - HIRE \n";
		cout << "8 - EXIT \n";

		// Set the result
		cin >> result;

		// If the result is 1
		if (result == 1)
		{
			FirstResponse();
		}
		// If the result is 2
		else if (result == 2)
		{
			SecondResponse();
		}
		// If the result is 3
		else if (result == 3)
		{
			ThirdResponse();
		}
		// If the result is 4
		else if (result == 4)
		{
			FourthResponse();
		}
		// If the result is 5
		else if (result == 5)
		{
			FifthResponse();
		}
		// If the result is 6
		else if (result == 6)
		{
			SixthResponse();
		}
		// If the result is 7
		else if (result == 7)
		{
			// Display msg
			cout << "You hired them! \n";

			// Set the hire variable name
			p->Hire(name);

			// set the result to 8
			result = 8;
		}
		// If the result is not 8
		else if (result != 8)
		{
			// Display msg
			cout << result << " is not a choice! \n";
		}
	}
}
