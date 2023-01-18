#include "Fonctions.h"


using namespace std;

int main()
{
	vector<Client> clients =
	{
		Client("Pakt", "Sylvain", "ID"),
		Client("Man", "Spider", "ID"),
		Client("Uzi", "Jak", "ID"),
		Client("Routin", "Thomas", "ID"),
		Client("Wormix", "Maxime", "ID"),
	};
	
	Hotel hotel("Feur", "PARIS", "ID");
	RemplirHotel(hotel);
	
	vector<Reservation> reservations =
	{
		Reservation(Date(), hotel, clients[0], 1, 4),
		Reservation(Date(), hotel, clients[4], 5, 10)
	};
	
	cout << hotel;
	cout << "Clients :" << endl;
	for (auto client : clients)
	{
		cout << client << endl;
	}
	
	AfficherInfoReservation(reservations, clients, Date(), hotel, 1);
	AfficherToutesReservation(reservations);
	
	return 0;
}