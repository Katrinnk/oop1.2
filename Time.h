#pragma once
#include <iostream>
using namespace std;

class Time
{
private:
	int hours;
	int minutes;
	int seconds;
public:
	int getHours() const { return hours; }
	int getMinutes() const { return minutes; }
	int getSeconds() const { return seconds; }

	bool setHours(int);
	bool setMinutes(int);
	bool setSeconds(int);

	void getTime();
	void getTimep();

	bool Init(int hours, int minutes, int seconds);
	void Read();
	void Display();
};
