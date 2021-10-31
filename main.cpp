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
	string command1 = "python3 python/main.py " + username + " " + password1;
	string command2 = "python3 python/main.py " + username + " " + password2;
	string command3 = "python3 python/main.py " + username + " " + password3;
	cout << command1 << endl;
	cout << command2 << endl;
	cout << command3 << endl;
	const char *command_current1 = command1.c_str();
	const char *command_current2 = command2.c_str();
	const char *command_current3 = command3.c_str();
	system(command_current1);
	system(command_current2);
	system(command_current3);
	return 0;
}
