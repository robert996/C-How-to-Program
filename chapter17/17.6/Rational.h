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

	void addition(const Rational);//�ӷ�����
	void subtraction(const Rational);//��������
	void multiplication(const Rational);//�˷�����
	void division(const Rational);//��������

	void printStandard();
	void printUniversal();

private:
	int numerator;
	int denominator;
	int calcDivisor(int, int);
};

