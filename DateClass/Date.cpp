#include "Date.h"
using namespace std;

Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}

Date::~Date()
{
}

bool Date::IsOlder(Date date_)
{
    bool isOlder = false;
    if (year < date_.year) 
    {
        isOlder = true;
    }
    else
    {
        if (month < date_.month)
        {
            isOlder = true;
        }
        else
        {
            if (day < date_.day)
            {
                isOlder = true;
            }
        }
    }
    return isOlder;
}

string Date::getDate()
{
    string date = to_string(year) + "/" + to_string(month) + "/" + to_string(day);
    return date;
}

void Date::setDate(int day_, int month_, int year_)
{
    day = day_;
    month = month_;
    year = year_;
}