#include "Complex.h"
#include <iostream>

using namespace std;

Complex::Complex(double real, double imaginary)
{
	setRealPart(real);
	setImaginaryPart(imaginary);
	cout << "Complex number created successfully!\n" << "The complex number is:(" << getRealPart()
		<< "," << getImaginaryPart() << ")" << endl;
}

Complex::~Complex()
{
	cout << "This object has been destroyed!" << endl;
}

void Complex::setRealPart(double real)
{
	realPart = real;
}

void Complex::setImaginaryPart(double imaginary)
{
	imaginaryPart = imaginary;
}

double Complex::getRealPart()
{
	return realPart;
}

double Complex::getImaginaryPart()
{
	return imaginaryPart;
}

void Complex::addition(Complex complex)
{
	realPart += complex.getRealPart();
	imaginaryPart = complex.getImaginaryPart();
	printComplex();
}

void Complex::subtraction(Complex complex)
{
	realPart -= complex.getRealPart();
	imaginaryPart -= complex.getImaginaryPart();
	printComplex();
}

void Complex::multiplication(Complex complex)
{
	realPart = (realPart * complex.getRealPart() - imaginaryPart * complex.getImaginaryPart());
	imaginaryPart = (imaginaryPart * complex.getRealPart() + realPart * complex.getImaginaryPart());
	printComplex();
}

void Complex::division(Complex complex)
{
	if (complex.getRealPart() == 0 && complex.getImaginaryPart() == 0)
	{
		realPart = 0;
		imaginaryPart = 0;
	}
	else
	{
		realPart = (realPart * complex.getRealPart() + imaginaryPart * complex.getImaginaryPart()) / 
			(complex.getRealPart() * complex.getRealPart() +  complex.getImaginaryPart() * complex.getImaginaryPart());
		imaginaryPart = (imaginaryPart * complex.getRealPart() - realPart * complex.getImaginaryPart()) / 
			(complex.getRealPart() * complex.getRealPart() + complex.getImaginaryPart() * complex.getImaginaryPart());
	}
	printComplex();
}

void Complex::printComplex()
{
	cout << "The complex number is : (" << realPart << "," << imaginaryPart << ").\n";
}