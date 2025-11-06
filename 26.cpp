#include<iostream>
using namespace std;

template<typename T>
T sum(T n1,T n2)
{
    T rs;
    rs=n1+n2;
    return rs;
};
int main()
{
    int a=10,b=20,c;
    long i=1.1,j=22,k;
    c=sum(a,b);
    cout<<"\n The sum of integer value:"<<c;
    k=sum(i,j);
    cout<<"\n The sum of long value:"<<k;
}