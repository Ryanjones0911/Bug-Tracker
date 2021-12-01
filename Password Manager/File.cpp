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



//FINISH THESE FUNCTIONS ONCE GETFILECONTENTS IS WORKING
/*
//searches & returns username for a given user
string File::GetUsername()
{

}

//searches & returns password for a given user
string File::GetPassword()
{

}*/
