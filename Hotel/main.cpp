#include "date.h"
#include "client.h"
#include "Chambre.h"
#include "hotel.h"
#include "Reservation.h"


using namespace std;

int main()
{
	Hotel hotel("Louvre", "Paris", "ID");
	for (int i = 0; i < 3  ; i++)
	{
		Chambre chambre(i, "Simple", true);
		hotel.AjouterChambre(chambre);
	}
	for (int j = 3; j < 8; j++)
	{
		Chambre chambre(j, "Double", true);
		hotel.AjouterChambre(chambre);
	}
	for (int k = 8; k < 10; k++)
	{
		Chambre chambre(k, "Suite", true);
		hotel.AjouterChambre(chambre);
	}

	Reservation reservation();
	return 0;
}