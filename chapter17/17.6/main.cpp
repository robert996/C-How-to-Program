#include <iostream>
#include "Rational.h"
using namespace std;

int main()
{
	Rational rational1(4, 9);
	Rational rational2(3, 4);

	rational1.printStandard();
	rational2.printStandard();

	rational1.addition(rational2);

	rational1.printStandard();

	rational1.subtraction(rational2);

	rational1.printStandard();

	rational1.multiplication(rational2);

	rational1.printStandard();

	rational1.division(rational2);

	rational1.printStandard();
	return 0;
}