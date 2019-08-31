#pragma once
#include <string>

using namespace std;

class HeartRates
{
public:
	HeartRates(string = "Robert", string = "Qi", int =  8, int = 11, int = 1996);
	void setFirstName(string);
	string getFirstName();

	void setLastName(string);
	string getLastName();

	void setMonth(int);
	int getMonth();

	void setDay(int);
	int getDay();

	void setYear(int);
	int getYear();

	int getAge();
	
	int getMaxiumumHeartRate();

	void displayInfo();
private:
	string firstName;
	string lastName;
	int month;
	int day;
	int year;
	int checkDay(int);
};