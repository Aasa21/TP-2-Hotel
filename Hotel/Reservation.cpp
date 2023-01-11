#include "Reservation.h"

Reservation::Reservation()
{
	this->client = client.getID();
	this->chambre = chambre.getNumero();
	this->hotel = hotel.getId();
	this->Duree = 1;
	this->TotalPrice = chambre.getPrice();
}

int Reservation::getDuree() const
{
	return Duree;
}

int Reservation::getTotalPrice() const
{
	return TotalPrice;
}

Date Reservation::getDate() const
{
	return date;
}

string Reservation::getIDClient() const
{
	return client.getID();
}

int Reservation::getNumero() const
{
	return chambre.getNumero();
}

int Reservation::getPrice() const
{
	return chambre.getPrice();
}

Hotel Reservation::getId() const
{
	return hotel.getId();
}

void Reservation::setDate()
{
	this->date = date;
}

void Reservation::setHotel()
{
	this->hotel = hotel;
}

void Reservation::setClient()
{
	this->client = client;
}

void Reservation::setChambre()
{
	this->chambre = chambre;
}

void Reservation::setPrice()
{
	this->chambre = chambre;
}

void Reservation::setTotalPrice()
{
	this->TotalPrice = chambre.getPrice() * Duree;
}