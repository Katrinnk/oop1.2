#include "Time.h"
#include <iostream>

using namespace std;

bool Time::setHours(int i)
{
	if (i >= 0 && i <= 23)
	{
		hours = i;
		return true;
	}
	else
	{
		hours = -i;
		return false;
	}
}
bool Time::setMinutes(int k)
{
	if (k >= 0 && k <= 59)
	{
		minutes = k;
		return true;
	}
	else
	{
		minutes = -k;
		return false;
	}
}
bool Time::setSeconds(int m)
{
	if (m >= 0 && m <= 59)
	{
		seconds = m;
		return true;
	}
	else
	{
		seconds = -m;
		return false;
	}
}
void Time::getTime()
{
	cout << hours << "  hours " << minutes << "  minutes " << seconds << "  seconds" << endl;
}
void Time::getTimep()
{
	if (hours<=12)
		cout<< hours << "  a.m " << minutes << "  minutes " << seconds << "  seconds" << endl;
	if (hours==13)
		cout << "  1 p.m " << minutes << "  minutes " << seconds << "  seconds" << endl;
	if (hours==14)
		cout << "  2 p.m " << minutes << "  minutes " << seconds << "  seconds" << endl;
	if (hours==15)
		cout << "  3 p.m " << minutes << "  minutes " << seconds << "  seconds" << endl;
	if (hours==16)
		cout << "  4 p.m " << minutes << "  minutes " << seconds << "  seconds" << endl;
	if (hours==17)
		cout << "  5 p.m " << minutes << "  minutes " << seconds << "  seconds" << endl;
	if (hours==18)
		cout << "  6 p.m " << minutes << "  minutes " << seconds << "  seconds" << endl;
	if (hours==19)
		cout << "  7 p.m " << minutes << "  minutes " << seconds << "  seconds" << endl;
	if (hours==20)
		cout << "  8 p.m " << minutes << "  minutes " << seconds << "  seconds" << endl;
	if (hours==21)
		cout << "  9 p.m " << minutes << "  minutes " << seconds << "  seconds" << endl;
	if (hours==22)
		cout << "  10 p.m " << minutes << "  minutes " << seconds << "  seconds" << endl;
	if (hours==23)
		cout << "  11 p.m " << minutes << "  minutes " << seconds << "  seconds" << endl;
}
bool Time::Init(int hours, int minutes, int seconds)
{
	return setHours(hours) && setMinutes(minutes) && setSeconds(seconds);
}
void Time::Read()
{
	int hours;
	int minutes;
	int seconds;
	do
	{
		cout << "hours= "; cin >> hours;
		cout << "minutes= "; cin >> minutes;
		cout << "seconds= "; cin >> seconds;
	} while (!Init(hours, minutes, seconds));
}
void Time::Display()
{
	cout << "hours= " << hours << endl;
	cout << "minutes= " << minutes << endl;
	cout << "seconds= " << seconds << endl;
}
