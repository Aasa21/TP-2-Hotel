#include "date.h"

using namespace std;

Date::Date(int Day, int Month, int Year)
{
	if (DateValide(Day, Month, Year))
	{
		_Day = Day;
		_Month = Month;
		_Year = Year;
	}
	else
	{
		throw invalid_argument("Date invalide");
	}
}

Date::Date()
{
	time_t t = time(0);
	struct tm* now = localtime(&t);
	_Year = now->tm_year + 1900;
	_Month = now->tm_mon + 1;
	_Day = now->tm_mday;
}

int Date::getDay() const
{
	return _Day;
}

int Date::getMonth() const
{
	return _Month;
}

int Date::getYear() const
{
	return _Year;
}

bool Date::DateValide(int d, int m, int y)
{
	int t[4] = { 4, 6, 9, 11 };
	int *mois = std::find(std::begin(t), std::end(t), m);
	if (y < 0)
	{
		return false;
	}
	if (m < 1 || m > 12)
	{
		return false;
	}
	if (d < 1 || d > 31)
	{
		return false;
	}
	if (m == 2 && d > 29)
	{
		return false;
	}
	if (mois == std::end(t) && d > 30)
	{
		return false;
	}
	return true;
}

ostream& operator<<(ostream& os, const Date& date)
{
	os << date._Day << "/" << date._Month << "/" << date._Year;
	return os;
}

bool Date::operator>(const Date& date) const
{
	if (_Year > date.getYear())
	{
		return true;
	}
	else if (_Year == date.getYear())
	{
		if (_Month > date.getMonth())
		{
			return true;
		}
		else if (_Month == date.getMonth())
		{
			if (_Day > date.getDay())
			{
				return true;
			}
		}
	}
	return false;
}

bool Date::operator==(const Date& date) const
{
	if (_Year == date.getYear() && _Month == date.getMonth() && _Day == date.getDay())
	{
		return true;
	}
	return false;
}