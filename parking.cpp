#include <iostream>
#include <vector>
#include <string>
#include "parking.h"
using namespace std;

Vehicule::Vehicule (string type, string num_plaque)
 : type(type) , num_plaque(num_plaque)
{}

//affichage des vehicules
void Vehicule::affiche(ostream& affichage) const {
	
	affichage << "type de véhicule : " << type 
			  << "numéro de plaque : " << num_plaque
			  << endl;
}
/////voiture//////////////////////////////////////////////////////
Voiture::Voiture(string type, string num_plaque)
 : Vehicule(type, num_plaque)
{}

void Voiture::affiche(ostream& affichage) const {
	affichage << "-Voiture-" << endl;
	Vehicule::affiche(affichage);
}
/////////////////////////////////////////////////////////////////

///////camion///////////////////////////////////////////////////

Camion::Camion(string type, string num_plaque, double charge_utile)
 : Vehicule(type, num_plaque)
 , charge_utile(charge_utile)
{}

void Camion::affiche(ostream& affichage) const {
	affichage << "-Camion-" << endl;
	Vehicule::affiche(affichage);
	affichage << "charge utile en tonnes" << charge_utile << endl;
}
///////////parking///////////////////////////////////////////////////

void Parking::affiche_vehicules(ostream& out) const {
	
	for(auto vehicule : vehicules) {
		
		vehicule->affiche(out);
	}
}


void Parking::check_in_vehicule(Vehicule* v) {  vehicules.push_back(v); }


void Parking::supprimer_vehicules() {
	
	for(auto vehicule : vehicules) delete vehicule;
	vehicules.clear();
}




