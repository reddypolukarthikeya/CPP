#include <iostream>

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
        friend std::ostream & operator<<(std::ostream &out,complex &c);
        friend std::istream & operator>>(std::istream &in,complex &c);
};

complex operator+(complex c1, complex c2)
{
        complex temp;
        temp.real = c1.real + c2.real;
        temp.img = c1.img + c2.img;
        return temp;
}

std::ostream & operator<<(std::ostream &out,complex &c)
{
    out << c.real << " + i " << c.img << std::endl;
    return out;
}

std::istream & operator>>(std::istream &in,complex &c)
{
    in >> c.real >> c.img;
    return in;
}

int main ()
{ 
    complex c1,c2,c3;
    std::cin >> c1 >> c2;
    c3 = c1 + c2;
    std::cout << c3 << std::endl;
}
