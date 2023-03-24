#include <iostream>
#include <list>

using std::cout;
using std::cin;
using std::endl;
using std::list;

int main ()
{
    list<int> list;
    int n,temp,ch;
    cout << "Enter number of elements to insert into the list: ";
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> temp;
        list.push_back(temp);
    }
    do
    {
        cout << endl;
        cout << "      Menu" << endl << "1.Size" << endl << "2.Push Back" << endl << "3.Push Front" << endl
             << "4.Front" << endl << "5.Back" << endl << "6.Pop Back" << endl << "7.Pop Front" << endl << "8.Display" << endl << "9.Exit";
        cout << endl << "Enter your choice: [ ]\b\b";
        
        cin >> ch;
        switch(ch)
        {
            case 1:
                cout << endl << "Size of the list is: " << list.size();
            break;
            case 2:
                cout << endl << "Enter the element to insert at back: ";
                cin >> temp;
                list.push_back(temp);
            break;
            case 3:
                cout << endl << "Enter the element to insert at front: ";
                cin >> temp;
                list.push_front(temp);
            break;
            case 4:
                cout << endl << "First element of the list is: " << list.front();
            break;
            case 5:
                cout << endl << "Last element of the list is: " << list.back();
            break;
            case 6:
                cout << endl << "The element deleted from the back is: " << list.back();
                list.pop_back();
            break;
            case 7:
                cout << endl << "The element deleted from the front is: " << list.front();
                list.pop_front();
            break;
            case 8:
                for (int i=0;i<n;i++) {
                    cout << list.front() << "->";
                    list.pop_front();
                }
            break;
            default:
                return 0;
            break;
        }
    } while(ch!=9);
}