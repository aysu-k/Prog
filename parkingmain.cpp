#include <iostream>
using namespace std;

int main() {
	
	Parking floor_1;
	floor_1.ajouter_vehicule(new Voiture("voiture" , "VD512333"));
	floor_1.ajouter_vehicule(new Voiture("voiture" , "BL423708"));
	floor_1.ajouter_vehicule(new Camion("camion" , "ZH690123" , 100));
	floor_1.affiche_vehicules(cout);
	
	return 0;
}
