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


	void addition(Complex);//�ӷ�����
	void subtraction(Complex);//��������
	void multiplication(Complex);//�˷�����
	void division(Complex);//��������

	void printComplex();
private:
	double realPart;
	double imaginaryPart;
};
