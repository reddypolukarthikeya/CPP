#include <iostream>

class rect
{
    private:
        int length;
        int breadth;
    public:
        void setLength(int l)
        {
            if (l <= 0)
               std::cout << "Cannot set length..!!" << std::endl;
            else
               length = l;
        }
        void setBreadth(int b)
        {
            if (b <= 0)
               std::cout << "Cannot set breadth..!!" << std::endl;
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
            std::cout << "AREA = " << length*breadth << std::endl;
        }
        void perimeter()
        {
            std::cout << "PERIMETER = " << 2*(length*breadth) << std::endl;
        }
};
int main ()
{
    rect r1(10,5);
    rect r2(r1);
    r2.area();
    r1.area();
}