#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main()
{
	Employee employee1;
	Employee employee2("Robert", "Qi", 30000);

	employee1.displayEmployee();
	employee2.displayEmployee();

	employee1.setFirstName("_Jack");
	employee1.setLastName("_Ma");
	employee1.setMonthSalary(10000);
	employee1.displayEmployee();

	cout << employee1.getFirstName() << " " << employee1.getLastName() << "," << "Annual Salary:" << employee1.getMonthSalary() * 12 << endl;


	employee1.setMonthSalary(int(employee1.getMonthSalary() * 1.1));

	cout << employee1.getFirstName() << " " << employee1.getLastName() << "," << "Annual Salary:" << employee1.getMonthSalary() * 12 << endl;

	cout << employee2.getFirstName() << " " << employee2.getLastName() << "," << "Annual Salary:" << employee2.getMonthSalary() * 12 << endl;


	employee2.setMonthSalary(int(employee2.getMonthSalary() * 1.1));

	cout << employee2.getFirstName() << " " << employee2.getLastName() << "," << "Annual Salary:" << employee2.getMonthSalary() * 12 << endl;

	return 0;
}