class Rational
{
public:
	Rational( int = 0 , int = 0);
	~Rational();
	//set function
	void setNumerator(int);
	void setDenominator(int);

	//get function
	int getNumerator() const;
	int getDenominator() const;

	void addition(const Rational);//加法运算
	void subtraction(const Rational);//减法运算
	void multiplication(const Rational);//乘法运算
	void division(const Rational);//除法运算

	void printStandard();
	void printUniversal();

private:
	int numerator;
	int denominator;
	int calcDivisor(int, int);
};

