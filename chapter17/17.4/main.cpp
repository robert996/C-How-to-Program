#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
	Time time1('A');
	Time time2(2);
	Time time3(3, 32);
	Time time4(12, 32, 43);
	Time time5(25, 65, 84);


	time1.printUniversal();
	cout << "\n";
	time1.printStandard();

	cout << "\n\n";
	time2.printUniversal();
	cout << "\n";
	time2.printStandard();

	cout << "\n\n";
	time3.printUniversal();
	cout << "\n\n";
	time3.printStandard();

	cout << "\n\n";
	time4.printUniversal();
	cout << "\n";
	time4.printStandard();

	cout << "\n\n";
	time5.printUniversal();
	cout << "\n";
	time5.printStandard();
	cout << "\n\n";
	return 0;
}