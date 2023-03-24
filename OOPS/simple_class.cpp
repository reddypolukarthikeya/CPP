#include<iostream>

using std::cout;
using std::endl;

class smallobj
{
    private:
          int somedata;
    public:
          void setdata(int d) //MUTATOR
          {
              somedata = d;
          }
          int getdata()       //ACCESSOR
          {
              return somedata;
          }
};
int  main ()
{
    smallobj o1,o2;
    o1.setdata(10);
    o2.setdata(20);
    cout<<o1.getdata()<<endl;
    cout<<o2.getdata()<<endl;
}