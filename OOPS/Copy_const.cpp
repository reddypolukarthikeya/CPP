#include <iostream>
using namespace std;
class animal
{
    private:
        int a;
    public:
        animal() :a(0)
        {

        }
        void seta(int k) 
        { 
            a= k; 
        }
        int geta() 
        { 
            return a; 
        }

};
int main ()
{
    animal a1;
    a1.seta(1);
    cout << a1.geta;
}
