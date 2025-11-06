#include<iostream>
using namespace std;
template <class T, class U>
void multiply(T a, U b)
{
    cout<<"\n Multiplication="<<a<<b;
}
int main()
{
    int a,b;
    float x,y;
    cout<<"\n Enter two integers data:";
    cin>>a>>b;
    cout<<"\n Enter two float data:";
    cin>>x>>y;
    multiply(a,b);
    multiply(x,y);
    multiply(a,x);
    return 0;
}