#include "client.h"

Client::Client(string prenom, string nom, string ID)
{
	_prenom = prenom;
	_nom = nom;
	_ID = prenom.substr(0, 1) + nom;

}
	
string Client::getPrenom() const
{
	return _prenom;
}

string Client::getNom() const
{
	return _nom;
}

string Client::getID() const
{
	return _ID;
}

std::ostream& operator<<(std::ostream& os, const Client& client)
{
	os << client._prenom << " " << client._nom <<endl;
	os << "ID: " << client._ID << endl;
	return os;
}