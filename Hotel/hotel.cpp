#include "hotel.h"

Hotel::Hotel(string Name, string Location, string ID)
{
	_Name = Name;
	_Location = Location;
	_ID = Name + Location.substr(0, 3);
}

//Getters
string Hotel::getId() const
{
	return _ID;
}

Chambre Hotel::getChambre(unsigned int NumeroChambre)
{
	for (auto ch : _Chambres)
	{
		if (NumeroChambre == ch.getNumero())
		{
			return ch;
		}
	}
	cout << "Chambre " << NumeroChambre << " non trouvee" << endl;
}

unsigned int Hotel::getNombreDeChambre()
{
	return _Chambres.size();
}

//Autres fonctions
bool Hotel::AjouterChambre(Chambre& ch)
{
	for (auto it : _Chambres)
	{
		if (ch.getNumero() == it.getNumero())
		{
			cout << "Chambre " << ch.getNumero() << " deja existante" << endl;
			return false;
		}
	}
	_Chambres.push_back(ch);
	return true;
}

bool Hotel::SupprimerChambre(unsigned int NumeroChambre)
{
	for (auto it = _Chambres.begin(); it != _Chambres.end(); it++)
	{
		if (NumeroChambre == it->getNumero())
		{
			_Chambres.erase(it);
			return true;
		}
	}
	cout << "Chambre " << NumeroChambre << " non trouvée" << endl;
	return false;
}

void Hotel::AfficherChambres()
{
	for (auto ch : _Chambres)
	{
		cout << ch << endl;
	}
}

//Setters
void Hotel::setChambre(unsigned int NumeroChambre, Chambre ch)
{
	_Chambres.at(NumeroChambre-1) = ch;
}

void Hotel::setPrixChambre(unsigned int NumeroChambre, int Prix)
{
	for (auto it = _Chambres.begin(); it != _Chambres.end(); it++)
	{
		if (NumeroChambre == it->getNumero())
		{
			it->setPrix(Prix);
			return;
		}
	}	
	cout << "Chambre " << NumeroChambre << " non trouvee" << endl;
}

//Surcharge
std::ostream& operator<<(std::ostream& os, const Hotel& hotel)
{
	os << "Hotel " << hotel._Name << " situe a " << hotel._Location << " avec l'ID " << hotel._ID << " a " << hotel._Chambres.size() << " chambres" << endl;
	return os;
}