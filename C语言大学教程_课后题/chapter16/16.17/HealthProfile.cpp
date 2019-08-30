#include "HealthProfile.h"
#include <iostream>


HealthProfile::HealthProfile(string firstName, string lastName, string sex, int month, int day, int year, int height, int weight)
{
	setFirstName(firstName);
	setLastName(lastName);
	setSex(sex);
	setMonth(month);
	setDay(day);
	setYear(year);
	setHeight(height);
	setWeight(weight);
	displayInfo();
}

void HealthProfile::setSex(string _sex)
{
	sex = _sex;
}

string HealthProfile::getSex()
{
	return sex;
}

void HealthProfile::setHeight(int _height)
{
	height = _height;
}

int HealthProfile::getHeight()
{
	return height;
}

void HealthProfile::setWeight(int _weight)
{
	weight = _weight;
}

int HealthProfile::getWeight()
{
	return weight;
}

void HealthProfile::displayInfo()
{
	cout << "Name:" << getFirstName() << " " << getLastName()
		<< "\nSex:" << getSex()
		<< "\nbirthday:" << getMonth() << "/" << getDay() << "/" << getYear()
		<< "\nMaxiumumHeartRate:" << getMaxiumumHeartRate()
		<< "\nAge:" << getAge()
		<< "\nHeartRates Range:" << getMaxiumumHeartRate() * 0.5 << "¡ª" << getMaxiumumHeartRate() * 0.8
		<< "\nBMI:" << getBIM() << endl;
}

double HealthProfile::getBIM()
{
	return weight / (height * height / 10000);
}
