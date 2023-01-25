#pragma once
#include "client.h"
#include "hotel.h"
#include "date.h"

class Reservation
{
public:
	Reservation(Date DateReservation, Hotel& hotel, Client& client, unsigned int NumeroChambre, unsigned int NombreDeNuit, unsigned int Reservation = 0);
	//Setters
	void setDateReservation(Date DateReservation);
	void setNombreDeNuit(unsigned int NombreDeNuit);
	bool setNumeroChambre(unsigned int NumeroChambre);
	
	//Getters
	Client getClient() const;
	Date getDateReservation() const;
	Hotel getHotel() const;
	unsigned int getNumeroChambre();
	unsigned int getNombreDeNuit();
	unsigned int getReservation();
	
	//Autres fonctions
	int PrixTotal();

	//Surcharge
	friend std::ostream& operator<<(std::ostream& os, const Reservation& reservation);
	
private:
	//Déclaration des variables privées
	Date _DateReservation;
	Hotel _hotel;
	Client _client;
	unsigned int _NumeroChambre;
	unsigned int _NombreDeNuit;
	unsigned int _Reservation;
	int _PrixTotal;
};