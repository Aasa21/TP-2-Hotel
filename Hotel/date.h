#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <array>
#include <algorithm>

class Date
{
public:
	//Constructeur
	Date(int Jour, int Mois, int Annee);
	Date();

	//Getters et Setters
	int getJour() const;
	int getMois() const;
	int getAnnee() const;
	friend std::ostream& operator<<(std::ostream& os, const Date& date);
	bool operator>(const Date& date) const;
	bool operator ==(const Date& date) const;
	
private:
	//Dclaration des variables privées
	int _Jour;
	int _Mois;
	int _Annee;
	bool DateValide(int Jour, int Mois, int Annee);
};


