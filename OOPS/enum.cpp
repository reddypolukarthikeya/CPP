#include <iostream>

using std::cout;
using std::cin;
using std::endl;

enum days_of_week{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main()
{
    days_of_week day1,day2;
    day1 = Monday;
    day2 = Thursday;
    if (day1 < day2)
        cout << day1 << endl;
    else
        cout << day2 << endl;
}