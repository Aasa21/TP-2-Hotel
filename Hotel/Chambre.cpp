#include "Chambre.h"

Chambre::Chambre(int Price, unsigned int Numero, string Type, bool Disponible)
{
	_Numero = Numero;
	_Type = Type;
	_Disponible = Disponible;
	_Price = Price;
}

int Chambre::getPrice() const
{
	return _Price;
}

unsigned int Chambre::getNumero() const
{
	return _Numero;
}
bool Chambre::getDisponible() const
{
	return _Disponible;
}

void Chambre::setDisponible(bool Disponible)
{
	_Disponible = Disponible;
}

string Chambre::getType() const
{
	return _Type;
}

void Chambre::setPrice(int Price)
{
	_Price = Price;
}

std::ostream& operator<<(std::ostream& os, const Chambre& chambre)
{
	os << "Chambre " << chambre._Numero << " de type " << chambre._Type << " coute : " << chambre._Price << " euros" << " et est " << (chambre._Disponible ? "disponible" : "indisponible");
	return os;
}