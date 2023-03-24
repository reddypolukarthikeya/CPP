#include <iostream>

using std::cout;
using std::endl;

class rect
{
    private:
        int length;
        int breadth;
    public:
        void setLength(int length)
        {
            if (length <= 0)
               cout<<"Cannot set length..!!"<<endl;
            else
               this->length = length;//To overcome name ambiguity we use THIS POINTER
        }
        void setBreadth(int breadth)
        {
            if (breadth <= 0)
               cout<<"Cannot set breadth..!!"<<endl;
            else 
               this->breadth = breadth;
        }
        int getLength()
        {
            return length;
        }
        int getBreadth ()
        {
            return breadth;
        }
        void area()
        {
            cout<<"Area = "<<length * breadth<<endl;
        }
        void perimeter()
        {
            cout<<"Perimeter = "<<2*(length * breadth)<<endl;
        }
};
int main ()
{
    rect r1,r2;
    r1.setBreadth(5);
    r1.setLength(7);
    r2.setLength(8);
    r2.setBreadth(9);
    r1.area();
    r1.perimeter();
    r2.area();
    r2.perimeter();
}