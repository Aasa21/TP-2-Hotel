#pragma once
#include <iostream>
#include <string>

using namespace std;

class Client
{
public:
	//Constructeur
	Client(string FirstName = "", string LastName = "");
	//Getters et Setters
	string getFirstName() const;
	string getLastNane() const;
	void setFirstName(string FirstName);
	void setLastName(string LastName);
private:
	string FirstName;
	string LastName;

};

