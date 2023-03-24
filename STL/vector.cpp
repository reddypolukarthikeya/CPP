#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> v;
    int n;
    cout << "Enter the number of elements to be inserted: ";
    cin >> n;
    for (int i=0,temp;i<n;i++) {
        cin >> temp;
        v.push_back(temp);
    }
    cout << endl;
    for (int i=0;i<n;i++) {
        cout << v[i] << "  " ;
    }
}