#pragma once
#include "../16.16/HeartRates.h"
#include <string>
class HealthProfile : public HeartRates
{
public:
	HealthProfile(string = "Robert", string = "Qi", string = "man", int = 8, int = 11, int = 1996, int = 180, int = 88);
	
	void setSex(string);
	string getSex();

	void setHeight(int);
	int getHeight();

	void setWeight(int);
	int getWeight();

	void displayInfo();

	double getBIM();
private:
	string sex;
	int height;
	int weight;
};