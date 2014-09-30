#include "mainHeader.h"
#include <algorithm>
#include <windows.h>

void menuItems(){

	cout << "\t\t\tMenu\n"
		<< "\t\tE - Enter in a word or number.\n"
		<< "\t\tL - Length of the variable\n"
		<< "\t\tR - Resize the variable\n"
		<< "\t\tC - Clear\n"
		<< "\t\tQ - Exit the program\n";
}

void mainMenu(){

	char input;

	bool exit = false;

	menuItems();

	cout << "\n\t\tPlease use the keyboard to enter in a letter:";

	while (!exit)
	{
		if (cin >> input)
		{
			switch (toupper(input))
			{
			case 'E':
				break;

			case 'L':
				break;

			case 'C':
				break;

			case 'R':
				break;

			case 'Q':
				exit = true;
				break;

			default:
				cout << "Invalid option choice.\n";
				hitEnter();
				clearScreen();
				break;
			}
		}
	}
	return;
}


void hitEnter(){

	cout << "Hit enter to continue";
	cin.ignore();
	cin.ignore();
	return;
}

void clearScreen(){

	int clear = 0;

	COORD  xy = { 0, 6 };
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCursorPosition(hConsole, xy);

	while (clear < 2)
	{
		for (int i = 0; i < 20; i++)
		{
			cout << "\t";
		}

		clear++;
	}

	SetConsoleCursorPosition(hConsole, xy);

	cout << "\n\t\tPlease use the keyboard to enter in a letter:";
}