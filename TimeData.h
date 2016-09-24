/*Class which creates and modifies dates*/
#include <iostream>
using namespace std;


class Time
{

private:
	struct Date
	{
		int _day;//from 1-31
		int _month;//from 1-12
		int _year;//somewhat >1900
	};
	Date date;

public:
	Time();
	~Time();
	void printDate(Date date); //Print the given date on screen
    Date addDay(Date date, int days);//Adds given days to an date



};

Time::Time()
{
	date._day = 1;
	date._month = 1;
	date._year = 1900;

}

void Time::printDate(Date date)
{
  cout << date._day << "." << date._month << "." << date._year << " " << endl;
}

