#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char s1[100];
    char s2[100];

    cout << "Enter a string" << endl;
    cin.get(s1,100);
    cout << s1 << endl;
    cin.ignore();

    cout << "Enter another string" << endl;
    cin.get(s2,100);
    cout << s2 << endl;
   
    return 0;
}