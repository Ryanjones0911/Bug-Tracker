#pragma once
#include <string>
using namespace std;

class User
{
	public:
		void InitialMenu(int userChoice);
		int GetUserChoice();
		void Login(string userProfile);
};

