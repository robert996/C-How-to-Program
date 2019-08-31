class Complex
{
public:
	Complex(double = 0, double = 0);//default constructor
	~Complex();//destructor
	//set function
	void setRealPart(double);
	void setImaginaryPart(double);
	
	//get function
	double getRealPart();
	double getImaginaryPart();


	void addition(Complex);//加法运算
	void subtraction(Complex);//减法运算
	void multiplication(Complex);//乘法运算
	void division(Complex);//除法运算

	void printComplex();
private:
	double realPart;
	double imaginaryPart;
};
