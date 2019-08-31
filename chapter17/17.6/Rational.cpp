#include "Rational.h"
#include <iostream>
using namespace std;

Rational::Rational(int up, int down)
{
	setNumerator(up);
	setDenominator(down);
}

Rational::~Rational()
{
	
}

void Rational::setNumerator(int up)
{
	numerator = up;
}

void Rational::setDenominator(int down)
{
	denominator = down;
}

int Rational::getNumerator() const
{
	return numerator;
}

int Rational::getDenominator() const
{
	return denominator;
}

void Rational::addition(const Rational rational)
{
	int up1 = numerator;
	int up2 = rational.getNumerator();
	int down1 = denominator;
	int down2 = rational.getDenominator();
	denominator = down1 * down2;
	numerator = (up1 * down2 + up2 * down1);

	int divisor = calcDivisor(numerator, denominator);
	numerator /= divisor;
	denominator /= divisor;
}

void Rational::subtraction(const Rational rational)
{
	int up1 = numerator;
	int up2 = rational.getNumerator();
	int down1 = denominator;
	int down2 = rational.getDenominator();
	denominator = down1 * down2;
	numerator = (up1 * down2 - up2 * down1);

	int divisor = calcDivisor(numerator, denominator);
	numerator /= divisor;
	denominator /= divisor;
}

void Rational::multiplication(const Rational rational)
{
	numerator *= rational.getNumerator();
	denominator *= rational.getDenominator();

	int divisor = calcDivisor(numerator, denominator);
	numerator /= divisor;
	denominator /= divisor;
}

void Rational::division(const Rational rational)
{
	numerator *= rational.getDenominator();
	denominator *= rational.getNumerator();

	int divisor = calcDivisor(numerator, denominator);
	numerator /= divisor;
	denominator /= divisor;
}

void Rational::printStandard()
{
	cout << "The rational is:" << numerator << "/" << denominator << "\n" << endl;
}

void Rational::printUniversal()
{
	cout << "The rational is:" << numerator / denominator << "\n" << endl;
}

int Rational::calcDivisor(int num1, int num2)
{
	int temp;
	while (true)
	{
		temp = num1 % num2;
		if (temp == 0)
			break;
		num1 = num2;
		num2 = temp;
	}
	return num2;
}