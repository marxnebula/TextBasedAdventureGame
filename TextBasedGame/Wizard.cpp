#include "stdafx.h"
#include "Wizard.h"
#include <iostream>

using namespace std;

Wizard::Wizard()
{
	name = "Wizard";
}


Wizard::~Wizard()
{
}

void Wizard::FirstResponse()
{
	cout << "Wizard First answer \n";
}

void Wizard::SecondResponse()
{
	cout << "Wizard Second answer \n";
}

void Wizard::ThirdResponse()
{
	cout << "Wizard Third answer \n";
}

void Wizard::FourthResponse()
{
	cout << "Wizard Fourth answer \n";
}

void Wizard::FifthResponse()
{
	cout << "Wizard Fifth answer \n";
}

void Wizard::SixthResponse()
{
	cout << "Wizard Sixth answer \n";
}
