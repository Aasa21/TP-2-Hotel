#include "Chambre.h"

Chambre::Chambre(int Numero, string Type, bool Disponible, int Price)
{
	this->Numero = Numero;
	this->Type = Type;
	this->Disponible = Disponible;
	this->Price = Price;
	if (Type == "Single")
	{
		Price = 70;
	}
	else if (Type == "Double")
	{
		Price = 120;
	}
	else if (Type == "Suite")
	{
		Price = 230;
	}
	else
	{
		cout << "Erreur de type de chambre" << endl;
	}
}

int Chambre::getNumero() const
{
	return Numero;
}

string Chambre::getType() const
{
	return Type;
}

bool Chambre::getDisponible() const
{
	return Disponible;
}

int Chambre::getPrice() const
{
	return Price;
}

void Chambre::setNumero(int Numero)
{
	this->Numero = Numero;
}

void Chambre::setType(int NbLits)
{
	this->Type = Type;
}

void Chambre::setDisponible(bool Disponible)
{
	this->Disponible = Disponible;
}

void Chambre::setPrice(int Price)
{
	this->Price = Price;
}