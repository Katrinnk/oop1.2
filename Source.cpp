#include "Time.h"
#include <iostream>

using namespace std;

Time makeTime(int hours, int minutes, int seconds)
{
	Time l;
	if (!l.Init(hours, minutes, seconds))
		cout << "Wrong arguments to Init!" << endl;
	return l;
}

int main()
{
	Time l;
	int hours, minutes, seconds;
	l.Read();
	l.Display();
	l.getTime();
	l.getTimep();
	return 0;
}