#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int x=-1;
    cout << endl << "Before try";
    try {
        cout << endl << "Inside try";
        if (x < 0) {
            throw x;
            cout << endl << "After throw";
        }
    }
    catch (int x) {
        cout << endl << "Exception caught";
    }
    cout << endl << "After catch";
    return 0;
}