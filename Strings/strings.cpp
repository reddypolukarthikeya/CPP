#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    int ch;
            cout << "Enter a string" << endl;
    string s;
    cin >> s;
    do
    {
       
        cout << "      Menu" << endl << "1.Length" << endl << "2.Capacity" << endl << "3.Resize";
        cout << endl << "4.Max size" << endl << "5.Clear" << endl << "6.Empty" << endl; 
        cout << "Enter your choice:[ ]\b\b" << endl;
        cin >> ch;
       
        switch(ch)
        {
            case 1:
                cout << s.length() << endl;
            break;
            case 2:
                cout << s.capacity() << endl;
            break;
            case 3:
                cout << "Enter resize value" << endl;
                int n;
                cin >> n;
                s.resize(n);
                cout << s.capacity() << endl;
            break;
            case 4:
                cout << s.max_size() << endl;
            break;
            case 5:
                s.clear();
                cout << s;  
                cout << "Enter another string" << endl;
                cin >> s;
            break;
            case 6:
                cout << s.empty() << endl;
            break;
        }
    }while(ch!=8);
}