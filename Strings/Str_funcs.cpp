#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int ch;
    const int max = 20;
    char a[max];
    char b[max];     
    do
    {
        cout << "\n\t\tSTRING FUNCTOINS" << endl;
        cout << "1.String Length\n2.String Concat\
                 \n3.String Copy\n4.Substring";
        cout << "\n\t\tEnter your choice : [ ]\b\b";
        cin >> ch;
        switch (ch)
        {
            case 1://Strlength
                cout << "\nEnter a string :";
                cin >> a;
                cout << "Length of string: " << strlen(a) << endl;
            break;
            case 2://Strcat(destination,source)
                cout << "\nEnter 1st string :";
                cin >> a;
                cout << "Enter 2nd string :";
                cin >> b;
                strcat(a,b);
                cout << "Concated String : " << a << endl;
            break;
            case 3://strcpy(destination,source)
                cout << "\nEnter 1st string :";
                cin >> a;
                cout << "Enter 2nd string :";
                cin >> b;
                cout << "Copied string :" << strcpy(a,b);
            break;
            case 4://strstr(main string,substring)
                cout << "\nEnter Main string :";
                cin >> a;
                cout << "Enter Substring string :";
                cin >> b;
                if (strstr(a,b) != NULL)
                    cout << strstr(a,b) << endl;
                else
                    cout << "Not Found..!!";
            break;
        }
    }while(ch!=5);
}