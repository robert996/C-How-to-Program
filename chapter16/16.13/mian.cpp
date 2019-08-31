#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main()
{
	Invoice invoice1;
	Invoice invoice2("002", "software", 10, 200);

	invoice1.getInvoiceAmount();
	invoice2.getInvoiceAmount();

	invoice1.setCount(100);
	invoice1.setPrice(1000);
	invoice1.setNum("0101");
	invoice1.setInfo("WeChat");
	invoice1.diplayInvoice();
	invoice1.getInvoiceAmount();

	invoice2.setCount(10);
	invoice2.setPrice(2000);
	invoice2.setNum("0202");
	invoice2.setInfo("QQ");
	invoice2.diplayInvoice();
	invoice2.getInvoiceAmount();
	return 0;
}