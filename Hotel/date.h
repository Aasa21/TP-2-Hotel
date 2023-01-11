#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <array>

class Date
{
public:
	//Constructeur
	Date(int Day, int Month, int Year);
	Date();
	//Getters et Setters
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	friend std::ostream& operator<<(std::ostream& os, const Date& date);
	bool operator>(const Date& date) const;
	bool operator ==(const Date& date) const;
	
private:
	int _Day;
	int _Month;
	int _Year;
	bool DateValide(int Day, int Month, int Year);
};


