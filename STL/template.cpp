#include <iostream>
#include <string>
#include <vector>
#define max 10

using std::cout;
using std::cin;
using std::endl;
using std::string;

template <class type>

class Stack
{
    private:
        int top;
        type a[max];
    public:
    Stack()
    {
        top = -1;
    }
    void push(type n)
    {
        a[++top] = n;
    }
    type pop()
    {
        return a[top--];
    }
};

int main()
{
    Stack<int> s;
    cout << "Enter the number of elements to insert: ";
    int n;
    cin >> n;
    int temp;
    for (int i=0;i<n;i++)
    {
        cin >> temp;
        s.push(temp);
    }
    cout <<"The element deleted is : " << s.pop();
}