#include "client.h"

Client::Client(string FirstName, string LastName, string ID)
{
	_FirstName = FirstName;
	_LastName = LastName;
	_ID = ID;

}
	
string Client::getFirstName() const
{
	return _FirstName;
}

string Client::getLastNane() const
{
	return _LastName;
}

string Client::getID() const
{
	return _ID;
}

std::ostream& operator<<(std::ostream& os, const Client& client)
{
	os << client._FirstName << " " << client._LastName << " " << client._ID;
	return os;
}