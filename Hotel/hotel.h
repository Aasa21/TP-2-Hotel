#pragma once
#include <vector>
#include "Chambre.h"

using namespace std;

class Hotel
{
public:
	Hotel(string Name, string Location, string ID);
	//Getters
	string getId() const;
	Chambre getChambre(unsigned int NumeroChambre);
	
	bool AjouterChambre(Chambre& ch);
	bool SupprimerChambre(unsigned int NumeroChambre);
	void AfficherChambres();
	void setChambre(unsigned int NumeroChambre, Chambre ch);
	void setPrixChambre(unsigned int NumeroChambre, int Prix);
	unsigned int getNombreDeChambre();
	friend std::ostream& operator<<(std::ostream& os, const Hotel& hotel);
private:
	//Déclaration des variables privées
	string _Name;
	string _Location;
	string _ID;
	vector<Chambre> _Chambres;
};

