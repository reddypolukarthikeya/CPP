#include<iostream>

using std::cout;
using std::endl;

class base
{
    public :
       void display ()
       {
           cout << "Display of base" << endl;
       }
};
class derived : public base
{
    public :
       void show ()
       {
           cout << "Show of derived" << endl;
       }
};
int main ()
{
    base b;
    derived d;
    b.display();
    d.display();
    d.show();
}