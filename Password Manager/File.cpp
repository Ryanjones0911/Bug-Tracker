#include <iostream>
#include <string>
#include <fstream>
#include "File.h";
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
	string userFileName;

	cout << "Enter app name: ";
	cin.ignore(); //ignores trailing newline character leftover in cin from userChoice
	getline(cin, userFileName);

	myFile.open(userFileName);
	cout << "File Created successfully";
	return userFileName;
}

int File::GetUserChoice()
{
	int userChoice;

	cout << "Input 1 for new app info, 2 to check info submitted prior, or 3 to quit: " << endl;
	cin >> userChoice;

	return userChoice;
}

void File::GetFileContents()
{
	string desiredFile;
	string line;
	ifstream myFile;

	cout << "Enter name of file you wish to check: ";
	cin.ignore(); // ignores prior newline character
	getline(cin, desiredFile);

	myFile.open(desiredFile);

	if (myFile.is_open())
	{
		cout << "file located & opened. Contents are as follows:" << endl;
		while (getline(myFile, line))
			{
			cout << line << endl;
			}
		return;
	}
	else;
	{
		cout << "Could not locate file";
	}
}