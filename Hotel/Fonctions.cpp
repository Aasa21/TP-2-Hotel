#include "Fonctions.h"

void RemplirHotel(Hotel& hotel)
{
	Chambre ch1(100, 1, "Simple", true);
	Chambre ch2(100, 2, "Simple", true);
	Chambre ch3(100, 3, "Simple", true);
	Chambre ch4(125, 4, "Double", true);
	Chambre ch5(125, 5, "Double", true);
	Chambre ch6(125, 6, "Double", true);
	Chambre ch7(125, 7, "Double", true);
	Chambre ch8(125, 8, "Double", true);
	Chambre ch9(210, 9, "Suite", true);
	Chambre ch10(210, 10, "Suite", true);
	
	hotel.AjouterChambre(ch1);
	hotel.AjouterChambre(ch2);
	hotel.AjouterChambre(ch3);
	hotel.AjouterChambre(ch4);
	hotel.AjouterChambre(ch5);
	hotel.AjouterChambre(ch6);
	hotel.AjouterChambre(ch7);
	hotel.AjouterChambre(ch8);
	hotel.AjouterChambre(ch9);
	hotel.AjouterChambre(ch10);
}

void CreerNouvelleReservation(vector<Reservation>& reservations, vector<Client>& clients, Date DateReservation, Hotel& hotel, unsigned int NumeroChambre)
{
	unsigned int Jour = 0, Mois = 0, Annee = 0;
	do
	{
		cout << "Entrez la date de reservation (JJ/MM/AAAA): ";
		cin >> Jour >> Mois >> Annee;
	} while (!DateValide(Jour, Mois, Annee));
	DateReservation = Date(Jour, Mois, Annee);
	
	string name;
	cout << "Entrez le nom du client: ";
	cin >> name;
	Client client = AfficherInfoClient(clients, name);

	Chambre ch = hotel.getChambre(NumeroChambre);
	
	unsigned int NombreDeNuit = 0;
	do
	{
		cout << "Entrez le nombre de nuit: ";
		cin >> NombreDeNuit;
	} while (NombreDeNuit < 1);
	
	NumeroChambre = 0;
	do
	{
		cout << "Entrez le numero de chambre: ";
		cin >> NumeroChambre;
	} while (NumeroChambre <= 0 || NumeroChambre > hotel.getNombreDeChambre());
	
	Reservation reservation(DateReservation, hotel, client, NumeroChambre, NombreDeNuit);
		reservations.push_back(reservation);
}

void AfficherInfoReservation(vector<Reservation>& reservations, vector<Client>& clients, Date DateReservation, Hotel& hotel, unsigned int NumeroChambre)
{
	unsigned int Reservation = 0;
	for (auto reservation : reservations)
	{
		if (reservation.getDateReservation() == DateReservation && reservation.getNumeroChambre() == NumeroChambre)
		{
			cout << reservation << endl;
			return;
		}
	}
	cout << "Aucune reservation trouvee" << endl;
	CreerNouvelleReservation(reservations, clients, DateReservation, hotel, NumeroChambre);
}

bool DateValide(int Jour, int Mois, int Annee)
{
	int t[4] = { 4, 6, 9, 11 };
	int* mois = std::find(std::begin(t), std::end(t), Mois);
	if (Jour < 0)
	{
		return false;
	}
	if (Mois < 1 || Mois > 12)
	{
		return false;
	}
	if (Jour < 1 || Jour > 31)
	{
		return false;
	}
	if (Mois == 2 && Jour > 29)
	{
		return false;
	}
	if (mois == std::end(t) && Jour > 30)
	{
		return false;
	}
	return true;
}

void AfficherToutesReservation(vector<Reservation>& reservations)
{
	for (auto reservation : reservations)
	{
		cout << reservation << endl;
	}
}

unsigned int TrouverReservationDisponible(vector<Reservation>& reservations)
{
	unsigned int Reservation = 0;
	for (auto reservation : reservations)
	{
		if (reservation.getReservation() == Reservation)
		{
			Reservation++;
		}
	}
	return Reservation;
}

void AfficherReservationEtID(vector<Reservation>& reservations, unsigned int Reservation)
{
	for (auto reservation : reservations)
	{
		if (reservation.getReservation() == Reservation)
		{
			cout << reservation << endl;
		}
	}
	cout << "Aucune reservation trouvee" << endl;
}

void AfficherReservationParClient(vector<Reservation>& reservations, string nom)
{
	for (auto reservation : reservations)
	{
		if (reservation.getClient().getNom() == nom)
		{
			cout << reservation << endl;
		}		
	}
}

Client AfficherInfoClient(vector<Client>& clients, string nom)
{
	for (auto client : clients)
	{
		if (client.getNom() == nom)
		{
			cout << client << endl;
			return client;
		}
		cout << "Ce client n'existe pas" << endl;
	}
}

Client CreerNouveauClient(vector<Client>& clients, string nom)
{
	string prenom;
	string ID;
	cout << "Entrez le prenom du client: ";
	cin >> prenom;
	ID = prenom.substr(0, 1) + nom;
	Client client(prenom, nom, ID);
	clients.push_back(client);
	return client;	
}

void ModifierReservation(vector<Reservation>& reservations, unsigned int Reservation)
{
	for (auto reservation : reservations)
	{
		if (reservation.getReservation() == Reservation)
		{
			unsigned int Jour = 0, Mois = 0, Annee = 0;
			do
			{
				cout << "Entrez la date de reservation (JJ/MM/AAAA): ";
				cin >> Jour >> Mois >> Annee;
			} while (!DateValide(Jour, Mois, Annee));
			reservation.setDateReservation(Date(Jour, Mois, Annee));
			
			unsigned int NombreDeNuit = 0;
			do
			{
				cout << "Entrez le nombre de nuit: ";
				cin >> NombreDeNuit;
			} while (NombreDeNuit <= 1);
			reservation.setNombreDeNuit(NombreDeNuit);

			unsigned int NumeroChambre = 0;
			do {
				cout << "Entrez le numero de chambre: ";
				cin >> NumeroChambre;
			} while (NumeroChambre <= 0 || NumeroChambre > reservation.getHotel().getNombreDeChambre());
			reservation.setNumeroChambre(NumeroChambre);
			return;
		}
	}
	cout << "Reservation non trouvee" << endl;
}

void SupprimerReservation(vector<Reservation>& reservations, unsigned int Reservation)
{
	for (auto reservation : reservations)
	{
		if (reservation.getReservation() == Reservation)
		{
			reservations.erase(reservations.begin() + Reservation);
			return;
		}
	}
	cout << "Reservation non trouvee" << endl;
}