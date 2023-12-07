#include <iostream>

using std::ostream;

class complex
{
    private :
        int real;
        int img;
    public:
        complex(int r=0, int i=0)
        {
            real = r;
            img = i;
        }
        void display ()
        {
            std::cout << real << " + i " << img << std::endl;

        }
        friend complex operator+(complex c1, complex c2);
        friend ostream & operator<<(ostream &out,complex &c);
};

int main ()
{ 
    complex c1(5,3),c2(10,5),c3;
    c3 = c1 + c2;
    std::cout << c3 << std::endl;
}
complex operator+(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.img = c1.img + c2.img;
    return temp;
}
ostream & operator<<(ostream &out,complex &c)
{
    out << c.real << " + i " << c.img << std::endl;
    return out;
}