#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> v;
    int temp,n,ch,a,b;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> temp;
        v.push_back(temp);
    }
    do
    {
        cout << endl << "      Menu" << endl << "1.Insert" << endl << "2.Erase" << endl << "3.Dispaly" <<  endl << "4.Exit";
        cout << endl <<  "Enter your choice: [ ]\b\b";
        cin >> ch;
        switch (ch)
        {
            case 1:
                cout << "Enter the element to insert into the vector: ";
                cin >> temp;
                cout << endl << "Enter the index at which you want to insert: ";
                cin >> a;
                v.insert(v.begin()+a,temp);
            break;
            case 2:
                cout << endl << "Enter the lower bound of the range: ";
                cin >> a;
                cout << endl << "Enter the upper bound of the range: ";
                cin >> b;
                v.erase(v.begin()+a, v.begin()+b);
            break;
            case 3:
                cout << endl;
                for (int i=0;i<n;i++) 
                    cout << v[i] << "   ";
                cout << endl;
            break;
            default:
                return 0;
            break;
        }
    } while(3);

}