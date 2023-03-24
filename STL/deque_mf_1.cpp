#include <iostream>
#include <deque>

using std::cout;
using std::cin;
using std::endl;
using std::deque;

int main()
{ 
    deque<int> d;
    int ch,n,temp;
    cout << "Enter the number of elements in the deque: ";
    cin >> n;
    cout << "Enter the elements in the deque: " << endl;
    for (int i=0;i<n;i++) {
        cin >> temp;
        d.push_back(temp);
    }
    do
    {
        cout << endl << "        Menu" << endl << "1.Size" << endl << "2.Push Back" << endl << "3.Push Front" << endl;
        cout << "4.Front" << endl << "5.Back" << endl << "6.Pop Back" << endl << "7.Pop Front" << endl;
        cout << "8.Display" << endl << "9.Exit";
        cout << endl << "Enter your choice: [ ]\b\b";
        cin >> ch;
        switch(ch)
        {
            case 1:
                cout << "Size of the deque is: " << d.size();
            break;
            case 2:
                cout << "Enter the element to push back of the deque: ";
                cin >> temp;
                d.push_back(temp);
                cout << endl;
            break;
            case 3:
                cout << "Enter the element to push front of the deque: ";
                cin >> temp;
                d.push_front(temp);
                cout << endl;
            break;
            case 4:
                cout << "The first element of the deque is: " << d.front();
                cout << endl;
            break;
            case 5:
                cout << "The last element of the deque is: " << d.back();
                cout << endl;
            break;
            case 6:
                cout << "Element deleted from last";
                d.pop_back();
                cout << endl;
            break;
            case 7:
                cout << "Element deleted from front";
                d.pop_front();
                cout << endl;
            break;
            case 8:
                for (int i=0;i<n;i++) 
                    cout << d[i] << " ";
                cout << endl;
            default:
                return 0;
            break;
        }
    } while(ch!=9);
}