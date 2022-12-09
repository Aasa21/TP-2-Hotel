#pragma once
#include <iostream>
#include <string>

using namespace std;

class Hotel
{
public:
	Hotel(string Name, string Location, int Chambres);
	string getName() const;
	string getLocation() const;
	int getChambres() const;
	void setName();
	void setLocation();
	void setChambres();
private:
	int Chambres;
	string Location;
	string Name;
};

