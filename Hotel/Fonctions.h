#pragma once
#include "Reservation.h"
#include <cmath>
#include <algorithm>

using namespace std;

void RemplirHotel(Hotel& hotel);
void AfficherInfoReservation(vector<Reservation>& reservations, vector<Client>& clients, Date DateReservation, Hotel& hotel, unsigned int NumeroChambre);
void CreerNouvelleReservation(vector<Reservation>& reservations, vector<Client>& clients, Date DateReservation, Hotel& hotel, unsigned int NumeroChambre);
void AfficherToutesReservation(vector<Reservation>& reservations);
void AfficherReservationEtID(vector<Reservation>& reservations, unsigned int Reservation);
void AfficherReservationParClient(vector<Reservation>& reservations, string nom);
void ModifierReservation(vector<Reservation>& reservations, unsigned int Reservation);
void SupprimerReservation(vector<Reservation>& reservations, unsigned int Reservation);
bool DateValide(int Jour, int Mois, int Annee);
unsigned int TrouverReservationDisponible(vector<Reservation>& reservations);
Client AfficherInfoClient(vector<Client>& clients, string nom);
Client CreerNouveauClient(vector<Client>& clients, string nom);