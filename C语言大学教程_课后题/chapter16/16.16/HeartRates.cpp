#include <iostream>
#include <string>
#include <ctime>
#include "HeartRates.h"

time_t GMT;

HeartRates::HeartRates(string firstName, string lastName, int month, int day, int year)
{
	setFirstName(firstName);
	setLastName(lastName);
	setMonth(month);
	setYear(year);
	setDay(day);
	displayInfo();
}

void HeartRates::setFirstName(string _firstName)
{
	firstName = _firstName;
}

string HeartRates::getFirstName()
{
	return firstName;
}

void HeartRates::setLastName(string _lastName)
{
	lastName = _lastName;
}

string HeartRates::getLastName()
{
	return lastName;
}

void HeartRates::setMonth(int _month)
{
	if (_month > 0 && _month <= 13)
	{
		month = _month;
	}
	else
	{
		cout << "Invalid month (" << _month << ") set to 1.\n";
		month = 1;
	}
}

int HeartRates::getMonth()
{
	return month;
}

void HeartRates::setDay(int _day)
{
	day = checkDay(_day);
}

int HeartRates::getDay()
{
	return day;
}

void HeartRates::setYear(int _year)
{
	year = _year;
}

int HeartRates::getYear()
{
	return year;
}

int HeartRates::getAge()
{
	time(&GMT);
	GMT = GMT + 8 * 3600;  // transform the time zone
	tm* localTime = gmtime(&GMT);

	int age; 
	age = localTime->tm_year + 1900 - year;

	if ((localTime->tm_mon + 1 - month) == 0)
	{
		if (localTime->tm_mday - day == 0)
		{
			cout << "Happy Birthday!" << endl;
			return age;
		}
		if (localTime->tm_mday - day > 0)
			return age;
		if (localTime->tm_mday - day < 0)
			return age - 1;
			
	}
	else if((localTime->tm_mon + 1 - month) > 0)
	{
		return age;
	}
	else if ((localTime->tm_mon + 1 - month) < 0)
	{
		return age - 1;
	}
}

int HeartRates::getMaxiumumHeartRate()
{
	return 220 - getAge();
}

void HeartRates::displayInfo()
{
	cout << "Name:" << getFirstName() << " " << getLastName()
		<< "\nbirthday:" << getMonth() << "/" << getDay() << "/" << getYear()
		<< "\nMaxiumumHeartRate:" << getMaxiumumHeartRate()
		<< "\nAge:" << getAge()
		<< "\nHeartRates Range:" << getMaxiumumHeartRate() * 0.5 << "¡ª" << getMaxiumumHeartRate() * 0.8 << endl;
}

int HeartRates::checkDay(int testDay)
{
	static const int daysPerMonth[13] =
	{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (testDay > 0 && testDay <= daysPerMonth[month])
		return testDay;
	if (month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
		return testDay;
	cout << "Invalid day (" << testDay << ") set to 1.\n";
	return 1;
}