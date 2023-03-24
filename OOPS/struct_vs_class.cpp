#include <iostream>

using std::cout;
using std::endl;

struct smallobj
{
   // private://Difference is in structure by default everything is public
            //whereas in class by default everything is private

    int somedata;

    void setdata(int d)
    {
        somedata = d;
    }
    void display()
    {
        cout << somedata << endl;
    }
};
int main ()
{
    struct smallobj o1;
    o1.setdata(10);
    o1.display();
}