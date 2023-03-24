#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;
using std::endl;

int main()
{
    const int max = 20;
    char str[max];
    cout << "Enter a string" << endl;
    cin >> setw(max) >> str;
    cout << endl << str;
}