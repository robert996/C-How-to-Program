#ifndef  TIME_H
#define TIME_H

class Time
{
public:
	Time(char);
	Time(int = 0, int = 0, int = 0);
	
	//set functions
	void setTime(int, int, int);
	void setHour(int);
	void setMinute(int);
	void setSecond(int);

	//get functions
	int getHour();
	int getMinute();
	int getSecond();

	void printUniversal();
	void printStandard();
private:
	int hour;//0~23
	int minute;//0~59
	int second;//0~59
};
#endif // ! TIME_H
