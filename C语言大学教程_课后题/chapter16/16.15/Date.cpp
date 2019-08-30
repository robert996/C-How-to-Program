#include <iostream>
#include <iomanip>
#include "Date.h"

using namespace std;

Date::Date(int month, int day, int year)
{
	setMonth(month);
	setYear(year);
	setDay(day);
}

void Date::setMonth(int _month)
{
	if (_month >= 1 && _month <= 12)
	{
		month = _month;
	}
	else
	{
		month = 1;
	}
}

int Date::getMonth()
{
	return month;
}

void Date::setDay(int _day)
{
	day = checkDay(_day);
}

int Date::getDay()
{
	return day;
}

void Date::setYear(int _year)
{
	year = _year;
}

int Date::getYear()
{
	return year;
}

void Date::displayDate()
{
	cout << setfill('0') << setw(2) << getMonth() << "/"
		<< setw(2) << getDay() << "/" << setw(2) << getYear() << endl;
}


int Date::checkDay(int testDay)
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