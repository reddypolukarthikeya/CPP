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
        int getLength()
        {
            return length;
        }
        int getBreadth ()
        {
            return breadth;
        }
        void area();
        void perimeter();       
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
void rect :: area()//:: -> SCOPE RESOLUTION OPERATOR
{
    cout << "Area = " << length * breadth << endl;
}
void rect :: perimeter()
{
    cout << "Perimeter = " << 2 * (length * breadth) << endl;
}