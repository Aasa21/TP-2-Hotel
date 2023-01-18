#pragma once
#include <iostream>
#include <string>

using namespace std;

class Client
{
public:
	//Constructeur
	Client(string prenom, string nom, string ID);
	//Getters et Setters
	string getPrenom() const;
	string getNom() const;
	string getID() const;
	friend std::ostream& operator<<(std::ostream& os, const Client& client);
private:
	string _prenom;
	string _nom;
	string _ID;
};

