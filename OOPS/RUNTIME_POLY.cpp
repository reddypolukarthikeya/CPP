#include <iostream>

using std::cout;
using std::endl;

class Car //ABSTRACT CLASS 
{
    public :
        virtual void start () = 0;//PURE VIRTUAL FUNCTIONS
        virtual void stop () = 0; //PURE VIRTUAL FUNCTIONS
};
class innova : public Car
{
    public :
        void start ()
        {
            cout << "Innova started" << endl;
        }
        void stop ()
        {
            cout << "Innova stopped" << endl;
        }  
};
class swift : public Car
{
    public :
        void start ()
        {
            cout << "Swift started" << endl;
        }
        void stop ()
        {
            cout << "Swift stopped" << endl;
        }
};

int main ()
{
    Car *c = new innova();
    c -> start();
    c -> stop();
    c = new swift();
    c -> start();
    c -> stop();
    delete c;
    return 0;
}

