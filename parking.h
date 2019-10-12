#ifndef PARKING_H
#define PARKING_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Vehicule {

public:
	Vehicule(string type, string num_plaque);
	
	virtual void affiche(ostream&) const;
	virtual ~Vehicule() {}
	
protected:
	string type;
	string num_plaque;
	
};

class Voiture : public Vehicule {
	
public: 
	Voiture(string type, string num_plaque);
	void affiche(ostream&) const;
	
};

class Camion : public Vehicule {

public: 
	Camion(string type, string num_plaque, double charge_utile);
	void affiche(ostream&) const;
	
protected:
	double charge_utile;
};

class Parking {

public:
	void affiche_vehicules(ostream&) const;
	void check_in_vehicule(Vehicule* v);
	//void check_out_vehicule()
	void supprimer_vehicules();
	
protected:
	vector<Vehicule*> vehicules;
	
	
};

#endif 
