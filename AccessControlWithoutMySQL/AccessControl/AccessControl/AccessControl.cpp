#include "AccessControl.h"

AccessControl::AccessControl(string name, string password) {
	//set the default adminName and adminPassword
	name = "admin";
	password = "admin";
	this->adminName = name;
	this->adminPassword = password;
	cout << "The admin username and password has been initialized successfully." << endl;
}

string AccessControl::getAdminName(string name) {
	name = this->adminName;
	return name;
}

string AccessControl::getAdminPassword(string password) {
	password = this->adminPassword;
	return password;
}

string AccessControl::changeAdminName(string name) {
	this->adminName = name;
	return this->adminName;
}

string AccessControl::changeAdminPassword(string password) {
	this->adminPassword = password;
	return this->adminPassword;
}

void searchOption(int option) {
	//if the search option is expaned in the future, we can create a option vector
	cout << "Please specify the search option: " << endl;
	cout << "1: Search By Name" << endl;
	cout << "2: Search By Major" << endl;
	cout << "3: Search By Degree" << endl;
	cin >> option;
	if (option == 1) {
		//
		cout << "Starting searching by Name..." << endl;
	}
	if (option == 2) {
		//
		cout << "Starting searching by Major..." << endl;
	}
	if (option == 3) {
		//
		cout << "Starting searching by Degree..." << endl;	
	}
	else {cout << "Invalid input, check and input again!";}
}

void showUserInformation(string username, string password) {

}

int main(int argc, char* argv[]) {


	if (argc != 2) {
		cout << "Error in arguments" << endl;
		exit(1);
	}
	if (strcmp(argv[1], "-login")) {
		string username;
		cout << "Input your username: " << endl;
		cin >> username;
		string password;
		cout << "Input your password: " << endl;
		cin >> password;
		showUserInformation(username, password);
		//log in and display corresponding table information
	}
	if (strcmp(argv[1], "-search")) {
		string username;
		cout << "Input your username: " << endl;
		cin >> username;
		string password;
		cout << "Input your password: " << endl;
		cin >> password;
		int option;
		searchOption(option);
		//trigger the corresponding search option
	}
	else {
		cout << "No such command, Please input new command as prompted below: " << endl;
		cout << "AccessControl -login\t" << "or" << "AccessControl -search" << endl;
	}
	return 0;
}