#include "UserInfo.h"
#include <iostream>
#include <string>
#include "File.h"

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
