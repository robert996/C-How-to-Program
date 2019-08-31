#pragma once
#include <string>
using namespace std;

class Invoice
{
public:
	Invoice(string = "001", string = "hardware", int = 0, int = 0);

	void setNum(string);
	string getNum();
	
	void setInfo(string);
	string getInfo();

	void setCount(int);
	int getCount();

	void setPrice(int);
	int getPrice();

	int getInvoiceAmount();

	void diplayInvoice();
private:
	string num;
	string info;
	int count;
	int price;
};