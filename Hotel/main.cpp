#include "date.h"
#include "client.h"
#include "Chambre.h"
#include "hotel.h"

using namespace std;

int main()
{
	Hotel hotel("Hotel", "Paris");
	Chambre chambre(1, "Simple", true, 50);
	hotel.AjouterChambre(chambre);
	return 0;
}