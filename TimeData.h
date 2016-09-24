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
	void printDate(Date date); //Print the given Date on Screen
    Date addDay(Date date, int days);//



};

Time::Time()
{
	date._day = 1;
	date._month = 1;
	date._year = 1900;

}



