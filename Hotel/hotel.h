#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <ctime>
#include "Chambre.h"

using namespace std;

class Hotel
{
public:
	Hotel(string Name = "", string Location = "", string ID = "");
	string getName() const;
	string getLocation() const;
	string getId() const;
	vector<Chambre> getChambres() const;
	void AjouterChambre(Chambre ch);
	void setName();
	void setLocation();
	void setChambres();
	void setId();
private:
	vector<Chambre> Chambres;
	string Location;
	string Name;
	string ID;
};

