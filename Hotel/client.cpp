#include "client.h"

Client::Client(string FirstName, string LastName)
{
	this->FirstName = FirstName;
	this->LastName = LastName;
}

string Client::getFirstName() const
{
	return FirstName;
}

string Client::getLastNane() const
{
	return LastName;
}

void Client::setFirstName(string FirstName)
{
	this->FirstName = FirstName;
}

void Client::setLastName(string LastName)
{
	this->LastName = LastName;
}