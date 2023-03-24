#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string s;
    cin >> s;
    string::iterator it;
    for (it=s.begin();it!=s.end();it++)
        cout << *it;
    for (it=s.begin();it!=s.end();it++)
        *it = *it - 32;
    cout <<endl << s;
}