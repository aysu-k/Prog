#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Polynomial {

public:

	Polynomial();
	Polynomial(vector<double> coefficient, int degree) // @suppress("Class members should be properly initialized")
	{
		vector<double> coeff(100);
	}

	int getDegree();
	Polynomial addition(Polynomial a, Polynomial b);
	Polynomial multiplication(Polynomial a, Polynomial b);
	void print();


	private:

	int dgr;
	vector<double> coeff;

};
