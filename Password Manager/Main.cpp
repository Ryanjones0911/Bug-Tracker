#include <iostream>
#include <string>
#include "File.h";
#include "UserInfo.h"
using namespace std;

/* Login page project. Will likely use this to keep League account info & other info similar to that */

int main()
{
	UserInfo Ryan;

<<<<<<< HEAD
	Ryan.SetAppUserandPass();
}
=======
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
>>>>>>> 1d511da2874dcdf5df072bd54726519556bafcce
