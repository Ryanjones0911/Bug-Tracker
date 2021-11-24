#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include "File.h"
using namespace std;


void File::SetUsername(string userFile)
{
	ofstream myFile;
	string username;

	cout << "Enter username to store: ";
	getline(cin, username);
	myFile.open(userFile);
	myFile << "username: " << username << endl;
	myFile.close();
}

void File::SetPassword(string userFile)
{
	ofstream myFile;
	string userPassword;

	cout << "Enter password to store: ";
	getline(cin, userPassword);
	myFile.open(userFile, fstream::app);
	myFile << "Password: " << userPassword << endl;
	myFile.close();
}

string File::AddNewFile()
{
	ofstream myFile;
	string path = std::filesystem::current_path().string() + "\\User Profiles\\"; //sets path variable to current directory & moves to folder UserProfiles
	string userFileName;

	//if UserProfiles directory does not already exist, create it
	if (!(std::filesystem::exists(path)))
	{
		cout << "created User Profiles folder" << endl;
		std::filesystem::create_directory(path);
	}

	cout << "Enter name of user: ";
	cin.ignore(); //ignores trailing newline character leftover in cin from userChoice
	getline(cin, userFileName);

	userFileName += ".txt";
	path += userFileName;
	myFile.open(path);
	cout << "File Created successfully" << endl;
	myFile.close();
	return path;
}

//Logic that allows user to choose what they want to do with the file system
int File::GetUserChoice()
{
	int userChoice;

	cout << "Input 1 for new user info, 2 to check/edit info submitted prior, or 3 to quit: " << endl;
	cin >> userChoice;

	return userChoice;
}

//Allows a user to input a file and have the system display to screen all content within the file
void File::GetFileContents()
{
	string desiredFile;
	string path = std::filesystem::current_path().string() + "\\User Profiles\\";
	string line;
	ifstream myFile;

	cout << "Enter name of user you wish to check: ";
	cin.ignore();	// ignores prior newline character
	getline(cin, desiredFile);
	desiredFile += ".txt";
	path += desiredFile;

	myFile.open(path);

	if (myFile.is_open())
	{
		cout << "user located & opened. Contents are as follows:" << endl;
		while (getline(myFile, line))
		{
			cout << line << endl;
		}

		return;
	}
	else;
	{
		cout << "Could not locate user";
	}
}
