#include "date.h"

Date::Date(int Day, int Month, int Year)
{
	setDay(Day);
	setMonth(Month);
	setYear(Year);
}

void Date::setDay(int Day)
{
	this->Day = Day;
}

void Date::setMonth(int Month)
{
	this->Month = Month;
}

void Date::setYear(int Year)
{
	this->Year = Year;
}

int Date::getDay() const
{
	return Day;
}

int Date::getMonth() const
{
	return Month;
}

int Date::getYear() const
{
	return Year;
}