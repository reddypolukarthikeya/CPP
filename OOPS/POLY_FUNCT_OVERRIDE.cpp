#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class parent 
{
    public :
        void display()
        {
            cout << "display of parent " << endl;
        }
};
class child : public parent
{
    public :
        void display()
        {
            cout << "display of child " << endl;
        }
};

int main()
{
    parent p;
    child c;
    p.display();
    c.display();
    return 0;
}