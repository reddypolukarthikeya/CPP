#include <iostream>
#include <list>

using std::cout;
using std::cin;
using std::endl;
using std::list;

int main ()
{
    list<int> list1,list2;
    int ch,n,m,temp;
    cout << "Enter the number of elements in the list 1 :" << endl;
    cin >> n;
    cout << "Enter the elements in the list: " << endl;
    for (int i=0;i<n;i++) {
        cin >> temp;
        list1.push_back(temp);
    }
    cout << "Enter the number of elements in the list 2 :" << endl;
    cin >> m;
    cout << "Enter the elements in the list:" << endl;
    for (int i=0;i<m;i++) {
        cin >> temp;
        list2.push_back(temp);
    }
    
    do 
    {
        cout << "      Menu" << endl << "1.Reverse" << endl << "2.Merge" << endl << "3.Unique" << endl <<"4.Display" << endl << "5.Exit" << endl;
        cout << "Enter your choice: [ ]\b\b";
        cin >> ch;
        switch(ch)
        {
            case 1:
                cout << "The reversed list is: ";
                list1.reverse();
                for (int i=0;i<n;i++) {
                    cout << list1.front();
                    list1.pop_front();
                }
                cout << endl;
            break;
            case 2:
                cout << "The merged list is :";
                list1.merge(list2);
                for (int i=0;i<n;i++) {
                    cout << list1.front();
                    list1.pop_front();
                }
            break;
            case 3:
                cout << "Duplicates in the list has been removed";
                list1.unique();
            break;
            case 4:
                for (int i=0;i<n;i++) {
                    cout << list1.front() << "->";
                    list1.pop_front();
                }
            break;
            default:
                return 0;
            break;
        }
    }while (ch!=5);
}