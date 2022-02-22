#include "Date.h"
#include <iostream>

using namespace std;

int main()
{

    Date date1;
    Date date2;

    date1.setDate(2, 21, 2022);
    date2.setDate(2, 22, 2022);

    cout << date1.getDate();
    cout << endl;
    cout << date2.getDate();

    cout << endl;

    cout << date1.IsOlder(date2);
    cout << endl;
    cout << date2.IsOlder(date1);

}