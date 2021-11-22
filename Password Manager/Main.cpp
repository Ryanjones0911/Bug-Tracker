#include <iostream>
#include <string>
#include "File.h";
using namespace std;

/* Login page project. Will likely use this to keep League account info & other info similar to that */

int main()
{
	File currApp;
	int userChoice; 
	string userFileName;

	userChoice = currApp.GetUserChoice();
	
	if (userChoice == 1)
	{
		userFileName = currApp.AddNewFile();
		currApp.SetUsername(userFileName);
		currApp.SetPassword(userFileName);
	}

	if (userChoice == 2)
	{
		currApp.GetFileContents();
	}
}