#pragma once
#include <iostream>
#include <string>

using namespace std;

class Chambre
{
public:
	//Constructeur
	Chambre(int Prix, unsigned int Numero = 0, string Type = "Erreur", bool Disponible = false);

	//Getters 
	int getPrix() const;
	unsigned int getNumero() const;
	bool getDisponible() const;
	string getType() const;
	
	//Setters
	void setDisponible(bool Disponible);
	void setPrix(int Prix);

	//Surcharge
	friend std::ostream& operator<<(std::ostream& os, const Chambre& chambre);
private:
	//Déclaration des variables privées
	int _Prix;
	unsigned int _Numero;
	string _Type;
	bool _Disponible;
};

