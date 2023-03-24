#include <iostream>

using std::cout;
using std::endl;

class base 
{
    public : 
        virtual void func()
        {
            cout << "fun of base" << endl;
        }
};
class derived : public base
{
    public :
        void func()
        {
            cout << "fun of derived" << endl;
        }
};
int main ()
{
    base *p = new derived();
    p -> func();
}