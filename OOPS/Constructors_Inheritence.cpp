#include <iostream>

using std::cout;
using std::endl;

class base 
{
    public:
       base ()
       {
           cout << "From base default" << endl;
       }
};
class derived : public base 
{
    public :
       derived ()
       {
           cout << "From derived default" << endl;
       }       
}; 
int main ()
{
    derived  d;
}   