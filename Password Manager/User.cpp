#include "User.h"
#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include "File.h"


void User::InitialMenu(int userChoice)
{
	User currUser;
	File currApp;
	string userFileName;
	string user;


	if (userChoice == 1)
	{
		userFileName = currApp.AddNewFile();
		currApp.SetUsername(userFileName);
		currApp.SetPassword(userFileName);
	}

	if (userChoice == 2)
	{
		cout << "Enter your name: ";
		cin >> user;
		currUser.Login(user);
	}

	if (userChoice == 3)
	{
		cout << "Goodbye";
	}
}

void User::Login(string userProfile)
{
	ifstream file;
	string path = std::filesystem::current_path().string() + "\\User Profiles\\"; //leads to userprofile directory. Should find a better way to save this variable. Maybe new function?
	string userFile = path + userProfile + ".txt";
	string line; //for searching text file
	string username;
	string password;

	//open file of user trying to login (info in userProfile)
	file.open(userFile);

	//checks if file is open, and if it is checks that user entered username & password match file record
	if (file.is_open())
	{
		cout << "file located & opened" << endl;
		cout << "Enter username: ";
		cin >> username;

		while (!file.eof()) //while we have not reached the end of the file
		{
			while (getline(file, line)) //get current line of the file until the end of the file is reached
			{
				if (line == username)
				{
					cout << "Username found. Enter Password: ";
					cin >> password;
				}
				if (line == password)
				{
					cout << "Password found. Login successful" << endl;

				}
			}
		}
	}
	else
	{
		cout << "file not found" << endl;
	}
}





	

