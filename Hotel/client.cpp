#include "client.h"

Client::Client(string FirstName, string LastName, string ID)
{
	this->FirstName = FirstName;
	this->LastName = LastName;
	this->ID = ID;

	cout << "Entrez le prenom du client :" << endl;
	cin >> FirstName;
	
	cout << "Entrez le nom du client :" << endl;
	cin >> LastName;
	
	ID = FirstName.substr(0, 1);
	ID += LastName;
	cout << "L'ID du client est : " << ID << endl;
	
}
	
string Client::getFirstName() const
{
	return FirstName;
}

string Client::getLastNane() const
{
	return LastName;
}

string Client::getID() const
{
	return ID;
}

void Client::setFirstName(string FirstName)
{
	this->FirstName = FirstName;
}

void Client::setLastName(string LastName)
{
	this->LastName = LastName;
}

void Client::setID(string ID)
{
	this->ID = ID;
}