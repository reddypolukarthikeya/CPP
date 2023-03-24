#include <iostream>
#include <list>

using std::cout;
using std::cin;
using std::endl;
using std::list;

int main()
{
    list<int> list;
    int n,temp;
    cout << "Enter the number of elements: ";
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> temp;
        list.push_back(temp);
    }
    for (int i=0;i<n;i++) {
        cout << list.front() << "->";
        list.pop_front();
    }
}