#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

Employee::Employee(string firstName, string lastName, int monthSalary)
{
	setFirstName(firstName);
	setLastName(lastName);
	setMonthSalary(monthSalary);

}

void Employee::setFirstName(string _firstName)
{
	firstName = _firstName;
}

string Employee::getFirstName()
{
	return firstName;
}

void Employee::setLastName(string _lastName)
{
	lastName = _lastName;
}

string Employee::getLastName()
{
	return lastName;
}

void Employee::setMonthSalary(int _monthSalary)
{
	if (_monthSalary >= 0)
	{
		monthSalary = _monthSalary;
	}
	else
	{
		monthSalary = 0;
	}
}

int Employee::getMonthSalary()
{
	return monthSalary;
}

void Employee::displayEmployee()
{
	cout << firstName << " " << lastName << ",Salary:" << monthSalary << endl;
}