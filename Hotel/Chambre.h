#pragma once
#include <iostream>
#include <string>

using namespace std;

class Chambre
{
public:
	//Constructeur
	Chambre(int Prix, unsigned int Numero = 0, string Type = "Erreur", bool Disponible = false);
	//Getters et Setters
	int getPrix() const;
	unsigned int getNumero() const;
	bool getDisponible() const;
	void setDisponible(bool Disponible);
	string getType() const;
	void setPrix(int Prix);
	friend std::ostream& operator<<(std::ostream& os, const Chambre& chambre);
private:
	int _Prix;
	unsigned int _Numero;
	string _Type;
	bool _Disponible;
};

