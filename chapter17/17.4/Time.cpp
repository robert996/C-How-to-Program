#include <iostream>
#include <iomanip>
#include <ctime>
#include "Time.h"
using namespace std;

Time::Time(char flag)
{
	time_t GMT;
	time(&GMT);
	GMT = GMT + 8 * 3600;  // transform the time zone
	tm* localTime = gmtime(&GMT);
	hour = localTime->tm_hour;
	minute = localTime->tm_min;
	second = localTime->tm_sec;
}

Time::Time(int hr, int min, int sec)
{
	setTime(hr, min, sec);
}

void Time::setTime(int hr, int min, int sec)
{
	setHour(hr);
	setMinute(min);
	setSecond(sec);
}

void Time::setHour(int hour)
{
	Time::hour = (hour >= 0 && hour < 24) ? hour : 0;
}

void Time::setMinute(int min)
{
	minute = (min >= 0 && min < 60) ? min : 0;
}

void Time::setSecond(int sec)
{
	second = (sec >= 0 && sec < 60) ? sec : 0;
}

int Time::getHour()
{
	return hour;
}

int Time::getMinute()
{
	return minute;
}

int Time::getSecond()
{
	return second;
}

void Time::printUniversal()
{
	cout << setfill('0') << setw(2) << getHour() << ":"
		<< setw(2) << getMinute() << ":" << setw(2) << getSecond();
}

void Time::printStandard()
{
	cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12)
		<< ":" << setfill('0') << setw(2) << getMinute()
		<< ":" << setw(2) << getSecond() << (hour < 12 ? "AM" : "PM");
}