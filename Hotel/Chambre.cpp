#include "Chambre.h"

Chambre::Chambre(int Price, unsigned int Numero, string Type, bool Disponible)
{
	_Numero = Numero;
	_Type = Type;
	_Disponible = Disponible;
	_Prix = Price;
}

//Getters
int Chambre::getPrix() const
{
	return _Prix;
}

unsigned int Chambre::getNumero() const
{
	return _Numero;
}
bool Chambre::getDisponible() const
{
	return _Disponible;
}

string Chambre::getType() const
{
	return _Type;
}

//Setters
void Chambre::setDisponible(bool Disponible)
{
	_Disponible = Disponible;
}

void Chambre::setPrix(int Prix)
{
	if (Prix > 0)
	{
		_Prix = Prix;
	}
}

//Surcharge
std::ostream& operator<<(std::ostream& os, const Chambre& chambre)
{
	os << "Chambre " << chambre._Numero << " de type " << chambre._Type << " coute : " << chambre._Prix << " euros" << " et est " << (chambre._Disponible ? "disponible" : "indisponible");
	return os;
}