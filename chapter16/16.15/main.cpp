#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
	Date date1;
	Date date2(13, 24, 1998);
	date1.displayDate();
	date2.displayDate();

	date2.setMonth(2);
	date2.setDay(29);
	date2.setYear(2001);

	date2.displayDate();

	return 0;
}