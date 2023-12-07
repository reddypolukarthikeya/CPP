#include <iostream>

enum days_of_week{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main()
{
    days_of_week day1,day2;
    day1 = Monday;
    day2 = Thursday;
    if (day1 < day2)
        std::cout << day1 << std::endl;
    else
        std::cout << day2 << std::endl;
}