
#include <iostream>
#include "Polynomial.h"
#include "Polynomial.cpp"
using namespace std;

int main() {

	Polynomial a({0, -2, 7, -8},3); // Shouldn't the first input be a coefficient array?
	Polynomial b({10, 0, -3, 4},4);

	multiplication(a, b);

	return 0;
}
