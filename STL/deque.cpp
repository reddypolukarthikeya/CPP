#include <iostream>
#include <deque>

using std::cout;
using std::cin;
using std::endl;
using std::deque;

int main()
{
    deque<int> d;
    int n,temp;
    cout << "Enter the number of elements in the deque: ";
    cin >> n;
    cout << "Enter the elements in the deque: ";
    for (int i=0;i<n;i++) {
        cin >> temp;
        d.push_back(temp);
    }
    cout << "Elements in deque are:" << endl;
    for (int i=0;i<n;i++)
        cout << d[i] << " ";
}