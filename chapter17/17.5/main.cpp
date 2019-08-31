#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	Complex complex;
	Complex complex1(3.14);
	Complex complex2(6.66, 8.88);

	complex.addition(complex1);
	complex.subtraction(complex2);
	complex.multiplication(complex1);
	complex.division(complex2);
	return 0;
}