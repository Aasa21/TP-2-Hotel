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
	//Déclaration des variables privées
	string _prenom;
	string _nom;
	string _ID;
};

