/*PASSGEN 24.09.2016
requirements
->atleast 12 Signs			->atleast 1 spezial character
->atleast 1 captial Letter	->needs to Change every 90 Days
->atleast 1 number			-> No reuse of the past 10 Passwords
->between one and another password, one character needs to change.
*/



/*
24.09.16
*/


#include <iostream>
#include <time.h>
using namespace std;


int main()
{
	struct tm ts;
	ts.tm_mon = 10;
	ts.tm_mday = 5;
	ts.tm_year = 1993;

	ts.tm_hour = 0;
	ts.tm_min = 0;
	ts.tm_sec = 1;
	ts.tm_isdst = -1;

	


	

}

