#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::cin;
using std::setw;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
        goto even;
    else
        goto odd;
    even:
        cout << setw(4) << "Even" << endl;
        return 0;
    odd:
        cout << setw(4) << "Odd" << endl;
}