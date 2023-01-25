#include "Fonctions.h"


using namespace std;

int main()
{
	//Ajout des clients dans le vector Client
	vector<Client> clients =
	{
		Client("Pakt", "Sylvain", "ID"),
		Client("Man", "Spider", "ID"),
		Client("Uzi", "Jak", "ID"),
		Client("Routin", "Thomas", "ID"),
		Client("Wormix", "Maxime", "ID"),
	};
	
	//Création de l'hotel
	Hotel hotel("Fleur", "PARIS", "ID");
	RemplirHotel(hotel);
	
	//Ajout des Réservations dans le vecteur réservation
	vector<Reservation> reservations =
	{
		Reservation(Date(), hotel, clients[0], 1, 4),
		Reservation(Date(), hotel, clients[4], 5, 10)
	};
	
	//Afichage des informations de l'objet "hotel"
	cout << hotel << endl;

	//Affichage du vector Client
	cout << "Clients :" << endl;
	for (auto client : clients)
	{
		cout << client << endl;
	}
	
	//Affichage de la réservation de la chambre 1
	AfficherInfoReservation(reservations, clients, Date(), hotel, 1);

	//Affichage de l'enseble des informations du vector Reservation
	AfficherToutesReservation(reservations);
	
	return 0;
}