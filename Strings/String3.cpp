#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    int ch;
    do
    {
        string str,s1,s2,s3,s4,s5;
        int n;
        cout << "Enter a string: ";
        cin >> str;
        cout << "      Menu" << endl << "1.Find" << endl << "2.R-Find" << endl << "3.Find-First-Of" << endl << "4.Find-Last-Of" << endl << "5.Sub-String" << endl << "6.Compare" << endl << "7.at" << endl << "8.Front" << endl << "9.Back" << endl << "10.Exit";
        cout << endl << "Enter your choice: [ ]\b\b";
        cin >> ch;
        switch(ch)
        {
            case 1: 
                cout << endl << "Enter string or char to find: ";
                cin >> s1;
                cout << endl << str.find(s1) << endl;
            break;
            case 2: 
                cout << endl << "Enter string or char to find: ";
                cin >> s2;
                cout << endl << str.rfind(s2) << endl;
            break;
            case 3: 
                cout << endl << "Enter string or char to find: ";
                cin >> s3;
                cout << endl << str.find_first_of(s1) << endl;
            break;
            case 4: 
                cout << endl << "Enter string or char to find: ";
                cin >> s4;
                str.find_last_of(s4);
                cout << endl;
            break;
            case 5: 
                cout << endl << "Enter index: ";
                cin >> n;
                cout << endl << str.substr(n) << endl;
            break;
            case 6: 
                cout << endl << "Enter another string: ";
                cin >> s5;
                cout << endl << str.compare(s5) << endl;
            break;
            case 7: 
                cout << endl << str.at(4) << endl;
            break;
            case 8: 
                cout << endl << str.front() << endl;
            break;
            case 9: 
                cout << endl << str.back() << endl;
            break;
            default:
                exit(0);
            break;
        }
    }while(ch!=10);
    return 0;
}