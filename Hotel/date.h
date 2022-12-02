#pragma once
#include <iostream>

class Date
{
public:
	//Constructeur
	Date(int Day = 1, int Month = 1, int Year = 1900);
	//Getters et Setters
	int getDay() const;
	int getMonth() const;
	int getYear() const;
	void setDay(int Day);
	void setMonth(int Month);
	void setYear(int Year);
	
private:
	int Day;
	int Month;
	int Year;
};


