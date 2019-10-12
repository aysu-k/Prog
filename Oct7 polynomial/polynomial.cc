#include <iostream>
#include "Polynomial.h"
#include <vector>

using namespace std;


//default constructor, vector avec une taille initiale 100 et tous les elements nuls


int Polynomial::getDegree() {
	
		int d = 0;
		for(int i(0); i < 100; ++i)
			if (coeff[i] != 0) d = i;
		return d;
}


Polynomial Polynomial::addition(Polynomial a, Polynomial b) {
	
	Polynomial c;
	
	for (int i(0); i <= a.getDegree(); ++i) {
		
		c.coeff[i] += a.coeff[i];
		
	}
	
	for(int i(0); i <= b.getDegree(); ++i) {
		c.coeff[i] += b.coeff[i];
			
	}

	return c;
}

Polynomial Polynomial::multiplication(Polynomial a, Polynomial b) {
	
	Polynomial c;
	for (int i(0); i <= a.getDegree(); ++i) {
		for (int j(0); j <= b.getDegree(); ++j) {
			c.coeff[i+j] += (a.coeff[i] * b.coeff[j]);
		}
	}
	c.dgr = c.getDegree(); // I think that we still have to group the coefficients afterwards.
	return c;
}

void Polynomial::print(){
	
	for(int i(99); i>=0; --i) {
		if(coeff[i] != 0) {	cout << coeff[i] << "*" << "x^" << i << " " << endl; }
	}
}

