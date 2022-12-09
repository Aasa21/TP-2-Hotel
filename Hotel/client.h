#pragma once
#include <iostream>
#include <string>

using namespace std;

class Client
{
public:
	//Constructeur
	Client(string FirstName = "", string LastName = "", string ID = "");
	//Getters et Setters
	string getFirstName() const;
	string getLastNane() const;
	string getID() const;
	void setFirstName(string FirstName);
	void setLastName(string LastName);
	void setID(string ID);
private:
	string FirstName;
	string LastName;
	string ID;

};

