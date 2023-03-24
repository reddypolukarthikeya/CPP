#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    vector<int> v;
    vector<int>v2;
    int ch;
    int temp,n;
    cout << "Enter the number of elements: " ;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> temp;
        v.push_back(temp);
    }
    do
    {
        cout << "\n\t\tVECTOR MEMBER FUNCTOINS" << endl;
        cout << "1.Push Back\n2.Size\
                 \n3.Swap\n4.Empty\n5.Back\n6.Pop Back\n7.Capacity\n8.Exit";
        cout << "\n\t\tEnter your choice : [ ]\b\b";
        cin >> ch;
        switch (ch)
        {
            case 1:
                cin >> temp;
                v.push_back(temp);
            break;
            case 2:
                cout << v.size();
            break;
            case 3:
                v.swap(v2);
            break;
            case 4:
                if (v.empty())
                    cout << "Vector is empty" << endl;
                else
                    cout << "Vector is not empty" << endl;
            break;
            case 5:
                cout << "The last element is: " << v.back() << endl;
            break;
            case 6:
            cout << "The element deleted is: " << v.back() << endl;
                v.pop_back();
            break;
            case 7:
                cout << "The capacity of the vector is: " << v.capacity() << endl; 
            break;
            default:
                return 0;
            break;
        }
    } while(ch!=8);
}