#include "date.h"
#include "client.h"
#include "Chambre.h"
#include "hotel.h"

using namespace std;

int main()
{
	Hotel hotel("Hotel", "Paris");
	Chambre chambre(1, "Simple", true);
	Chambre chambre2(2, "Double", true);
	Chambre chambre3(3, "Suite", true);
	Chambre chambre4(4, "Simple", true);
	hotel.AjouterChambre(chambre);
	hotel.AjouterChambre(chambre2);
	hotel.AjouterChambre(chambre3);
	hotel.AjouterChambre(chambre4);
	Client client;
	return 0;
}