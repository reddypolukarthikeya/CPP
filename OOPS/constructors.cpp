#include <iostream>

using std::cout;
using std::endl;

class rect
{
    private:
        int length;
        int breadth;
    public:
        void setLength(int l)
        {
            if (l <= 0)
               cout<<"Cannot set length..!!"<<endl;
            else
               length = l;
        }
        void setBreadth(int b)
        {
            if (b <= 0)
               cout<<"Cannot set breadth..!!"<<endl;
            else 
               breadth = b;
        }
        /**** DEFAULT OR UN-PARAMETERIZED CONSTRUCTOR ****/
        rect () 
        {
            length = 1;
            breadth = 1;
        }
        /*** PARAMETERIZED CONSTRUCTOR ***/
        rect (int l, int b)
        {
            setLength(l);
            setBreadth(b);
        }
        /*** COPY CONSTRUCTOR ***/
        rect (rect &r)
        {
            length = r.length;
            breadth = r.breadth;
        }
        void area()
        {
            cout<<"AREA = "<<length*breadth<<endl;
        }
        void perimeter()
        {
            cout<<"PERIMETER = "<<2*(length*breadth)<<endl;
        }
};
int main ()
{
    rect r1(10,5);
    rect r2(r1);
    r2.area();
    r1.area();
}