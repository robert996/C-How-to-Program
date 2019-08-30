#pragma once
class Date
{
public:
	Date(int = 8, int = 11, int = 1996);
	void setMonth(int);
	int getMonth();

	void setDay(int);
	int getDay();

	void setYear(int);
	int getYear();

	void displayDate();
private:
	int month;//month >= 1 && month <= 12
	int day; // month 
	int year;

	int checkDay(int);
};