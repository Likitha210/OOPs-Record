#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    void getvalue()
    {
        cout<<"Enter the two numbers:";
        cin>>a>>b;
    }
    void operator ++()
    {
        a=++a;
        b=++b;
    }
    void operator --()
    {
        a=--a;
        b=--b;
    }
    void display()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    Complex com;
    com.getvalue();
    ++com;
    cout<<"Increment Complex Number:\n";
    com.display();
    --com;
    cout<<"Decrement Complex Number:\n";
    com.display();
    return 0;
}