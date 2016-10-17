/*Class which creates and modifies dates*/
/*1Jan 31 2Feb 28/29 3Mar 31 4Apr 30 5Mai 31 6Jun 30 7Jul 31 8Aug 31 9Sep 30 10Okt 31 11Nov 30 12Dez 31*/
#include <iostream>
#include <fstream>
#include <F:\CPlusPlus\Projects\passGenerator\Pass.h>

using namespace std;

const int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

ofstream passwords;



class Time
{
public:

	struct Date
	{
		int _day;//from 1-31
		int _month;//from 1-12
		int _year;//somewhat >1900
	};
  Date date;

    

	Time();
    Time(int Day, int Month, int Year);
    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);

	
	void printDate(); //Print the given date on screen //MODIFY Print Month as string
    void add90Days();//Adds given days to an date
    
};

void Time::setDay(int day)
{
  if (day <= 31)
    date._day = day;
}

void Time::setMonth(int month)
{
  if (month <= 12)
    date._month = month;
}

void Time::setYear(int year)
{
  if (year > 1000)
    date._year = year;
}

Time::Time()
{
  setDay(0);
  setMonth(0);
  setYear(0);
 
}
Time::Time(int Day, int Month, int Year)
{
  setDay(Day);
  setMonth(Month);
  setYear(Year);
}

void Time::printDate()
{
  cout << date._day << "." << date._month << "." << date._year << " ";
  
  passwords.open("password.txt");
  passwords <<  date._day << "." << date._month << "." << date._year << " ";
 


 
  
  passwords << endl;
  //passwords.close();


 

}

void Time::add90Days()
{
  int days = 90;
  
  while (days > 0)
  {

    /*Prototype*/
    if (days > 31)            
    {
      days = days - month[date._month - 1];
      date._month++;
    }
    else
    {
     date._day =  date._day + days;

     if (date._day > month[date._month - 1])
     {
       if (date._month == 2)
       {
         //Schaltjahr check
         if (date._year / 4 && date._year % 100 > 0 || date._year % 100 == 0 && date._year % 400 > 0 || date._year % 400 == 0)
         {
           date._month++;
           date._day = date._day - 29;
           
         }
       }
       else
       date._month++;
       date._day = date._day - month[date._month - 2];
       
     }
     days = 0;
    }

    if (date._month > 12)//newYear
    {
      date._year++;
      date._month = date._month - 12;
    }
  }




}