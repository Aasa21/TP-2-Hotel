#pragma once
#include <iostream>
#include <string>
#include "Chambre.h"
#include "date.h"
#include "client.h"
#include "hotel.h"

using namespace std;

class Reservation
{
public:
	Reservation(Chambre chambre, Hotel hotel);
	int getDuree() const;
	int getTotalPrice() const;
	Date getDate() const;
	string getIDClient() const;
	int getNumero() const;
	int getPrice() const;
	Hotel getId() const;
	void setDate();
	void setClient();
	void setChambre();
	void setHotel();
	void setPrice();
	void setTotalPrice();
	
private:
	Date date;
	Client client;
	Chambre chambre;
	Hotel hotel;
	int Duree;
	int TotalPrice;
};

