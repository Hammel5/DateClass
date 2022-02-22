#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date
{
public:
	Date();
	~Date();

	bool IsOlder(Date date_);
	string getDate();
	void setDate(int day_, int month_, int year_);

	int day;
	int month;
	int year;

private:


};

#endif // !DATE_H