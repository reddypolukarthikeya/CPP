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
               cout << "Cannot set length..!!" << endl;
            else
               length = l;
        }
        void setBreadth(int b)
        {
            if (b <= 0)
               cout << "Cannot set breadth..!!" << endl;
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
        void area()
        {
            cout << "Area = "<< length * breadth << endl;
        }
        void perimeter()
        {
            cout << "Perimeter = " << 2 * (length * breadth) << endl;
        }
};
class cuboid : public rect
{
    private :
        int height;
    public :
        void setHeight(int h)
        {
            height = h;
        }
        void volume();
        void Lateral_Surface_Area();
        void Total_Surface_Area();
};
void cuboid::volume()
{
    cout << "Volume =  " <<  getLength() * getBreadth() * height << endl;
}
void cuboid::Lateral_Surface_Area()
{
    cout << "Lateral Surface Area = " << 2 * height * (getLength() + getBreadth())  << endl;  
}
void cuboid::Total_Surface_Area()
{
    cout << "Total Surface Area = " << 2 * (getLength()*getBreadth() + getBreadth()*height\
                                            + getLength()*height) << endl;
}
int main ()
{
    cuboid c1;
    c1.setLength(5);
    c1.setBreadth(7);
    c1.setHeight(6);
    c1.volume();
    c1.Lateral_Surface_Area();
    c1.Total_Surface_Area();
}