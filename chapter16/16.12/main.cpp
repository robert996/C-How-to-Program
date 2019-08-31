#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
	Account account1;
	account1.credit(1000);
	account1.debit(1001);
	account1.debit(999);
	return 0;
}