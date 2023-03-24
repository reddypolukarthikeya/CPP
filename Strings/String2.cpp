#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int ch,n;
    do
    {
        string str,s1,s2,s3,s4;
        cout << "Enter a string: ";
        cin >> str;
        cout << "     Menu" << endl << "1.Append" << endl << "2.Insert" << endl << "3.Replace" << endl;
        cout << "4.Push Back" << endl << "5.Pop Back" << endl << "6.Swap" << endl;
        cout << "7.Exit" << endl; 
        cout << "Enter your choice: [ ]\b\b" << endl;
        cin >> ch;
        cout << endl;
        switch (ch)
        {
            case 1:
               
                cout << "Enter the string to append: " ;
                cin >> s1;
                str.append(s1);
                cout << endl << str << endl;
            break;
            case 2:
                cout << "Enter string to insert: ";
                cin >> s2;
                cout << "Enter index to insert the string: ";
                cin >> n;
                str.insert(n,s2);
                cout << endl << str << endl;
            break;
            case 3:
                cout << "Enter the string to replace: ";
                cin >> s3;
                str.replace(2,3,s3);
                cout << endl << str << endl;
            break;
            case 4:
                cout << "Enter the string to push back: ";
                str.push_back('k');
                cout << endl << str << endl;
            break;
            case 5:
                cout << str;
                str.pop_back();
                cout << endl << str << endl;
            break;
            case 6:
                cout << "Enter another string to swap: ";
                cin >> s4;
                str.swap(s4);
                cout << endl << str << endl;
            break;
            default: 
                exit(0);
            break;
        } 
    }while (ch!=7);
}