#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    int word=0,space=1;
    char ch = 'a';
    while (ch != '\r')
    {
        ch = getche();
        if (ch == ' ')
            space++;
        else
            word++;
    }
    cout << endl;
    cout << space << " " <<endl << word; 
}