#include<iostream>
using namespace std;
int area(int side);
int area(int l, int b);
double area(double r);
int main()
{
    cout<<"\nArea of square:";
    cout<<area(5);
    cout<<"\nArea of rectangle:";
    cout<<area(5,10);
    cout<<"\nArea of circle:";
    cout<<area(5.5);
}
int area(int side)
{
    return(side+side);
}
int area(int l, int b)
{
   return(l*b);
}
double area(double r)
{
    return(3.14*r*r);
}
