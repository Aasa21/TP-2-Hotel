#pragma once
#include <iostream>
#include <string>

using namespace std;

class Chambre
{
public:
	//Constructeur
	Chambre(int Numero = 0, string Type = 0, bool Disponible = true);
	//Getters et Setters
	int getNumero() const;
	string getType() const;
	bool getDisponible() const;
	int getPrice() const;
	void setNumero(int Numero);
	void setType(int NbLits);
	void setDisponible(bool Disponible);
	void setPrice(int Price);
private:
	int Numero;
	string Type;
	bool Disponible;
	int Price;
};

