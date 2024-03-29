#include <iostream>

using std::ostream;
using std::istream;

class complex
{
    public :
        int real;
        int img;
    
        complex(int r=0, int i=0)
        {
            real = r;
            img = i;
        }
        friend complex operator+(complex c1, complex c2);
        friend complex operator*(complex c1, complex c2);
        friend complex operator-(complex c1, complex c2);
        friend ostream & operator<<(ostream &out,complex &c);
        friend istream & operator>>(istream &in,complex &c);
};
complex operator+(complex c1, complex c2)
{
        complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
}
complex operator*(complex c1, complex c2)
{
    complex temp;
    temp.real = (c1.real * c2.real) - (c1.img * c2.img);
    temp.img = (c1.real * c2.img) + (c1.img*c2.real);
    return temp;
}
complex operator-(complex c1, complex c2)
{
    complex temp;
    temp.real = c1.real - c2.real;
    temp.img = c1.img - c2.img;
    return temp;
}
ostream & operator<<(ostream &out,complex &c)
{
    out << c.real << " + i " << c.img << std::endl;
    return out;
}
istream & operator>>(istream &in,complex &c)
{
    in >> c.real >> c.img;
    return in;
}

int main ()
{ 
    complex c1,c2,c3;
    std::cin >> c1 >> c2;
    c3 = c1 - c2;
    std::cout << c3 << std::endl;
    return 0;
}
