#include "date.h"

using namespace std;

Date::Date(int Jour, int Mois, int Annee)
{
	if (DateValide(Jour, Mois, Annee))
	{
		_Jour = Jour;
		_Mois = Mois;
		_Annee = Annee;
	}
	else
	{
		throw invalid_argument("Date invalide");
	}
}


Date::Date()
{	
	time_t t = time(0);
	struct tm now;
	localtime_s(&now, &t);
	_Annee = now.tm_year + 1900;
	_Mois = now.tm_mon + 1;
	_Jour = now.tm_mday;
}

//Getters
int Date::getJour() const
{
	return _Jour;
}

int Date::getMois() const
{
	return _Mois;
}

int Date::getAnnee() const
{
	return _Annee;
}

//Check si la date est valide, test si le jour est dans le mois, si l'annee est positive, si le mois est entre 1 et 12
bool Date::DateValide(int Jour, int Mois, int Annee)
{
	int t[4] = { 4, 6, 9, 11 };
	int *mois = std::find(std::begin(t), std::end(t), Mois);
	if (Annee < 0)
	{
		return false;
	}
	if (Mois < 1 || Mois > 12)
	{
		return false;
	}
	if (Jour < 1 || Jour > 31)
	{
		return false;
	}
	if (Mois == 2 && Jour > 29)
	{
		return false;
	}
	if (mois == std::end(t) && Jour > 30)
	{
		return false;
	}
	return true;
}

//Surcharges
ostream& operator<<(ostream& os, const Date& date)
{
	os << date._Jour << "/" << date._Mois << "/" << date._Annee;
	return os;
}

bool Date::operator>(const Date& date) const
{
	if (_Annee > date.getAnnee())
	{
		return true;
	}
	else if (_Annee == date.getAnnee())
	{
		if (_Mois > date.getMois())
		{
			return true;
		}
		else if (_Mois == date.getMois())
		{
			if (_Jour > date.getJour())
			{
				return true;
			}
		}
	}
	return false;
}

bool Date::operator==(const Date& date) const
{
	if (_Annee == date.getAnnee() && _Mois == date.getMois() && _Jour == date.getJour())
	{
		return true;
	}
	return false;
}