#include "hotel.h"

Hotel::Hotel(string Name, string Location, string ID)
{
	this->Name = Name;
	this->Location = Location;

	srand((unsigned int)time(0));
	
	int IDpart = rand() %100 +1;
	stringstream sstm;
	sstm << Location << IDpart;
	ID = sstm.str();
	this->ID = ID;
}

string Hotel::getName() const
{
	return Name;
}

string Hotel::getLocation() const
{
	return Location;
}

string Hotel::getId() const
{
	return ID;
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
	this->Chambres = Chambres;
}

void Hotel::setId()
{
	this->ID = ID;

}

void Hotel::AjouterChambre(Chambre ch)
{
	Chambres.push_back(ch);
	
}
