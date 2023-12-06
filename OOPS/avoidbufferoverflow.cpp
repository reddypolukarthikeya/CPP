#include <iostream>
#include <iomanip>



int main()
{
    const int max = 20;
    char str[max];
    std::cout << "Enter a string" << std::endl;
    std::cin >> std::setw(max) >> str;
    std::cout << std::endl << str;
}