#include <iostream>
#include <string>
#include "File.h"
#include "User.h"
using namespace std;


/* Intent is to make a simple ticketing system that can be used to keep track of bugs and other issues. 
   Right now it just reads and writes to text files but everything starts somewhere. */

int main()
{
	User currUser;
	int userChoice;
	bool quit = false;



	while (!quit)
	{
		cout << "Input 1 to register, 2 to login, or 3 to quit: " << endl;
		cin >> userChoice;
		if (userChoice == 3)
		{
			cout << "Goodbye";
			quit = true;
		}
		else
		{
			currUser.InitialMenu(userChoice);
		}

	}
}
