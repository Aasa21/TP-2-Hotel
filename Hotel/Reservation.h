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
	Reservation(Date DateDebut, Hotel& hotel, Client& client, Chambre& chambre);
	
	
private:
	Date date;
	Client client;
	Chambre chambre;
	Hotel hotel;
	int Duree;
	int TotalPrice;
};

