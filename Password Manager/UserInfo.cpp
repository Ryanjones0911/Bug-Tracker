#include "UserInfo.h"
#include <iostream>
#include <string>
#include "File.h"


/* Allows user to interact with the file system, though its main purpose is to create username/password */
void UserInfo::SetAppUserandPass()
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
	if (userChoice == 3)
	{
		cout << "Goodbye";
	}
}
