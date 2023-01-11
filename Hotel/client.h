#pragma once
#include <iostream>
#include <string>

using namespace std;

class Client
{
public:
	//Constructeur
	Client(string FirstName, string LastName, string ID);
	//Getters et Setters
	string getFirstName() const;
	string getLastNane() const;
	string getID() const;
	friend std::ostream& operator<<(std::ostream& os, const Client& client);
private:
	string _FirstName;
	string _LastName;
	string _ID;
};

