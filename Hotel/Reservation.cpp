#include "Reservation.h"

Reservation::Reservation(Date DateReservation, Hotel& hotel, Client& client, unsigned int NumeroChambre, unsigned int NombreDeNuit, unsigned int Reservation)
:_hotel(hotel), _client(client), _Reservation(Reservation)
{
	if (hotel.getChambre(NumeroChambre).getDisponible() == true)
	{
		_DateReservation = DateReservation;
		_NumeroChambre = NumeroChambre;
		_NombreDeNuit = NombreDeNuit;
		hotel.getChambre(NumeroChambre).setDisponible(false);
		_PrixTotal = PrixTotal();
	}
	else
	{
		cout << "La chambre n'est pas disponible" << endl;
	}
}

void Reservation::setDateReservation(Date DateReservation)
{
	if (_hotel.getChambre(_NumeroChambre).getDisponible() && DateReservation > Date())
	{
		_DateReservation = DateReservation;
	}
	else
	{
		cout << "La chambre n'est pas disponible" << endl;
	}
	
}

void Reservation::setNombreDeNuit(unsigned int NombreDeNuit)
{
	if(NombreDeNuit < 0)
	{
		cout << "Nombre de nuit invalide" << endl;
	}
	else
	{
		_NombreDeNuit = NombreDeNuit;
		_PrixTotal = PrixTotal();
	}
}

bool Reservation::setNumeroChambre(unsigned int NumeroChambre)
{
	if (_hotel.getChambre(NumeroChambre).getDisponible())
	{
		_hotel.getChambre(_NumeroChambre).setDisponible(true);
		_NumeroChambre = NumeroChambre;
		_hotel.getChambre(_NumeroChambre).setDisponible(false);
		_PrixTotal = PrixTotal();
		return true;
	}
	else
	{
		cout << "La chambre n'est pas disponible" << endl;
		return false;
	}
}

Client Reservation::getClient() const
{
	return _client;
}

Date Reservation::getDateReservation() const
{
	return _DateReservation;
}

Hotel Reservation::getHotel() const
{
	return _hotel;
}

unsigned int Reservation::getNumeroChambre()
{
	return _NumeroChambre;
}

unsigned int Reservation::getNombreDeNuit()
{
	return _NombreDeNuit;
}

unsigned int Reservation::getReservation()
{
	return _Reservation;
}

int Reservation::PrixTotal()
{
	return _hotel.getChambre(_NumeroChambre).getPrix() * _NombreDeNuit;
}

std::ostream& operator<<(std::ostream& os, const Reservation& reservation)
{
	os << "Date de la reservation : " << reservation._DateReservation << " pour l'hotel : " << reservation.getHotel() << " pour le client : " << reservation.getClient() << " dans la chambre : " << reservation._NumeroChambre << " de type : " << reservation.getHotel().getChambre(reservation._NumeroChambre).getType() << " pour " << reservation._NombreDeNuit << " nuit(s) pour un prix total de " << reservation._PrixTotal << " euros." << " (prix par nuit : " << reservation.getHotel().getChambre(reservation._NumeroChambre).getPrix() << " euros)" << endl;
	return os;
}