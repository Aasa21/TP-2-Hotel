#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Chambre.h"

using namespace std;

class Hotel
{
public:
	Hotel(string Name, string Location);
	string getName() const;
	string getLocation() const;
	vector<Chambre> getChambres() const;
	void AjouterChambre(Chambre ch);
	void setName();
	void setLocation();
	void setChambres();
private:
	vector<Chambre> Chambres;
	string Location;
	string Name;
};

