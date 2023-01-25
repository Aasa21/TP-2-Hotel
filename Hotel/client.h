#pragma once
#include <iostream>
#include <string>

using namespace std;

class Client
{
public:
	//Constructeur
	Client(string prenom, string nom, string ID);

	//Getters
	string getPrenom() const;
	string getNom() const;
	string getID() const;

	//Surcharge
	friend std::ostream& operator<<(std::ostream& os, const Client& client);
private:
	//D�claration des variables priv�es
	string _prenom;
	string _nom;
	string _ID;
};

