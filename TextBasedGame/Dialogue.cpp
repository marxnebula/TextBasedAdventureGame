#include "stdafx.h"
#include "Dialogue.h"
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;



Dialogue::~Dialogue()
{
}

void Dialogue::TalkMenu(Player * p)
{
	// Display all options of talking and give answer

	cout << "Hello, "<< name <<  "! I am " << p->name << " from the Candy Kingdom. \n";
	cout << "The King has hired me to find mercenaries to destroy of the Ice Dragon that curses our Kingdom. \n";
	cout << "Before I choose to hire you, I must ask thy some questions. \n";

	while (result != 8)
	{
		cout << "What do you say? \n";
		cout << "1 - Who are you? \n";
		cout << "2 - Where do you hail from? \n";
		cout << "3 - Have you heard about the Ice Dragon that dwells to the North? \n";
		cout << "4 - What is your weapon of choice? \n";
		cout << "5 - What special skills do you have? \n";
		cout << "6 - How would you fare in a fight against a Dragon? \n";
		cout << "7 - HIRE \n";
		cout << "8 - EXIT \n";


		cin >> result;


		if (result == 1)
		{
			FirstResponse();
		}
		else if (result == 2)
		{
			SecondResponse();
		}
		else if (result == 3)
		{
			ThirdResponse();
		}
		else if (result == 4)
		{
			FourthResponse();
		}
		else if (result == 5)
		{
			FifthResponse();
		}
		else if (result == 6)
		{
			SixthResponse();
		}
		else if (result == 7)
		{
			// Hire
			cout << "You hired them! \n";
			p->Hire(name);
			result = 8;
		}
		else if (result != 8)
		{
			cout << result << " is not a choice! \n";
		}
	}
}
