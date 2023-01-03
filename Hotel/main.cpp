#include "date.h"
#include "client.h"
#include "Chambre.h"
#include "hotel.h"


using namespace std;

int main()
{
	Hotel hotel("Hotel", "Berlin", "ID");
	for (int i = 0; i < 3; i++) {
		Chambre chambrei(i, "Simple", true);
		hotel.AjouterChambre(chambrei);
	};
	for (int j = 3; j < 8; j++) {
		Chambre chambrej(j, "Double", true);
		hotel.AjouterChambre(chambrej);
	};
	for (int k = 8; k < 10; k++) {
		Chambre chambrek(k, "Suite", true);
		hotel.AjouterChambre(chambrek);
	};
	
	cout << hotel.getId() << endl;
	return 0;
}