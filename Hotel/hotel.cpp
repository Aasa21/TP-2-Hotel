#include "hotel.h"

Hotel::Hotel(string Name, string Location, string ID)
: _Name(Name), _Location(Location), _ID(ID)
{
}

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
	cout << "Chambre " << NumeroChambre << " non trouv�e" << endl;
}

bool Hotel::AjouterChambre(Chambre& ch)
{
	for (auto it : _Chambres)
	{
		if (ch.getNumero() == it.getNumero())
		{
			cout << "Chambre " << ch.getNumero() << " d�j� existante" << endl;
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
	cout << "Chambre " << NumeroChambre << " non trouv�e" << endl;
	return false;
}

void Hotel::AfficherChambres()
{
	for (auto ch : _Chambres)
	{
		cout << ch << endl;
	}
}

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
	cout << "Chambre " << NumeroChambre << " non trouv�e" << endl;
}

unsigned int Hotel::getNombreDeChambre()
{
	return _Chambres.size();
}

std::ostream& operator<<(std::ostream& os, const Hotel& hotel)
{
	os << "Hotel " << hotel._Name << " situ� � " << hotel._Location << " avec l'ID " << hotel._ID << " a " << hotel._Chambres.size() << " chambres" << endl;
	return os;
}