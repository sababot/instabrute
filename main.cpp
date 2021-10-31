#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	string username = argv[1];
	string password1 = argv[2];
	string password2 = argv[2];
	string password3 = argv[2];
	string command = "python3 python/main.py " + username + " " + password1 + " & python3 python/main.py " + username + " " + password2 + " & python3 python/main.py " + username + " " + password3;
	const char *command_current = command.c_str();
	system(command_current);
	return 0;
}
