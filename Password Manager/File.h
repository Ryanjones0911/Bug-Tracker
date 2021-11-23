#pragma once
using namespace std;

class File
{
	public:
		// functions for creating files & associated data
		void SetUsername(string userFile);
		void SetPassword(string userFile);
		string AddNewFile();
		int GetUserChoice();

		//functions for viewing files & data
		void GetFileContents();
};

