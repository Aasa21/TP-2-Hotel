#include "hotel.h"

Hotel::Hotel(string Name, string Location)
{
	this->Name = Name;
	this->Location = Location;
}

string Hotel::getName() const
{
	return Name;
}

string Hotel::getLocation() const
{
	return Location;
}

vector<Chambre> Hotel::getChambres() const
{
	return Chambres;
}

void Hotel::setName()
{
	this->Name = Name;
}

void Hotel::setLocation()
{
	this->Location = Location;
}

void Hotel::setChambres()
{
}

void Hotel::AjouterChambre(Chambre ch)
{
	Chambres.push_back(ch);
	
}
