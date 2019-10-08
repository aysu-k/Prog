#include <iostream>
#include "Polynomial.h"
using namespace std;


//default constructor, vector avec une taille initiale 100 et tous les elements nuls
Polynomial::Polynomial() {
		vector<double> coef(100);
} 

//constructor
Polynomial(double coefficient, int dgr) 
: degree(dgr), coef[dgr] = coefficient; {}


int Polynomial::getDegree() {
	
		int d = 0;
		for(int i(0); i < 100; ++i)
			if (coef[i] != 0) d = i;
		return d;
}


Polynomial Polynomial::addition(Polynomial b) {
	
	Polynomial a = *this;
	Polynomial c;
	
	for (int i(0); i <= a.getDegree(); ++i) {
		
		c.coef[i] += a.coef[i];
		
	}
	
	for(int i(0); i <= b.getDegree(); ++i) {
		c.coef[i] += b.coef[i];
			
	}
}

Polynomial Polynomial::multiplication(Polynomial b) {
	
	Polynomial a = *this;
	Polynomial c;
	for (int i(0); i <= a.getDegree(); ++i) {
		for (int j(0); j <= b.getDegree(); ++j) {
			c.coef[i+j] += (a.coef[i] * b.coef[j]);
		}
	}
	c.deg = c.getDegree(); // I think that we still have to group the coefficients afterwards.
	return c;
}

void Polynomial::print(){
	
	for(int i(99); i>=0; --i) {
		if(coef[i] != 0) {	cout << coef[i] << "*" << "x^" << i << " " << endl; }
	}
}

