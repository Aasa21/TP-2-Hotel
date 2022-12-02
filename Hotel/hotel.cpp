#include "hotel.h"

Hotel::Hotel(string Name, string Location, int Chambres)
{
	this->Name = Name;
	this->Location = Location;
	this->Chambres = Chambres;
}

string Hotel::getName() const
{
	return Name;
}

string Hotel::getLocation() const
{
	return Location;
}

int Hotel::getChambres() const
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
