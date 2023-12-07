#include <iostream>

class base 
{
    public:
       base ()
       {
           std::cout << "From base default" << std::endl;
       }
};
class derived : public base 
{
    public :
       derived ()
       {
           std::cout << "From derived default" << std::endl;
       }       
}; 
int main ()
{
    derived  d;
}   