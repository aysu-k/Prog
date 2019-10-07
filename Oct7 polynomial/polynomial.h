#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include <iostream>

class Polynomial {
	
public:

	Polynomial();
	Polynomial(double coefficient, int dgr);

	int getDegree();
	Polynomial addition(Polynomial b);
	Polynomial multiplication(Polynomial b);
	void print();


	private:

	int degree;
	vector<double> coeff;

};


#endif POLYNOMIAL_H
