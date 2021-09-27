#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	string username = argv[1];
	string password = argv[2];
	string command = "python3 scripts/ig.py " + username + " " + password;
	cout << command << endl;
	const char *command_current = command.c_str();
	system(command_current);
	return 0;
}
