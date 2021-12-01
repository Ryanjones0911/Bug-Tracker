#pragma once
#include <string>
using namespace std;

class User
{
	public:
		void InitialMenu();
		int GetUserChoice();
		void Login(string userProfile);
};

