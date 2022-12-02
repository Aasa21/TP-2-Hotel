#include "date.h"

using namespace std;

Date::Date(int Day, int Month, int Year)
{
	setDay(Day);
	setMonth(Month);
	setYear(Year);
	cout << "Entrez le jour de la reservation" << endl;
	cin >> Day;
	do
	{
		cout << "Le jour doit etre compris entre 1 et 31" << endl;
		cin >> Day;
	}
	while (Day < 1 || Day > 31);
	
	cout << "Entrez le mois de la reservation" << endl;
	cin >> Month;

	do
	{
		cout << "Le mois doit etre compris entre 1 et 12" << endl;
		cin >> Month;
	}
	while (Month < 1 || Month > 12);
	
	cout << "Entrez l'annee de la reservation" << endl;
	cin >> Year;
	cout << "La date du debut de la reservation est le " << Day << "/" << Month << "/" << Year << endl;
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