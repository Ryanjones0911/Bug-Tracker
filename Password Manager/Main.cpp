#include <iostream>
#include <string>
#include "File.h"
#include "User.h"
using namespace std;


/* Intent is to make a simple ticketing system that can be used to keep track of bugs and other issues. 
   Right now it just reads and writes to text files but everything starts somewhere. */

int main()
{
	User currUser;

	while (true)
	{
		currUser.InitialMenu();
	}
}