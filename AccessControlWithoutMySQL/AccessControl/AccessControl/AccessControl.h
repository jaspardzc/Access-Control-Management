/**
* Created by Can Zeng
* Access Control for Object-Subject-Right Matrix based table database
* Admin is granted the super right, can add, delete, modify, search anything in the database
* Normal Users are granted with basic right, can only add, search or modify his own data, can not delete records
* Admin can give extra right to specific users.
* Admin can delete extra right from specific users.
* Users cannot share right with others, except under the permission granted by the admin
* Users can send messages and requests to the admin.
* Admin can view, sort, clear the message box.
*/
#ifndef ACCESSCONTROL_H
#define ACCESSCONTROL_H
#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

class AccessControl {

private:
string adminName;
string adminPassword;

public:
AccessControl(string name, string password);
string getAdminName(string name);
string getAdminPassword(string password);
string changeAdminName(string name);
string changeAdminPassword(string password);
};

#endif ACCESSCONTROL_H

 