//Program to generate electricity bill
#include<iostream>
using namespace std;
class EB
{
    private:
    int customer_Id,units;
    char customer_name[50],Address[50];
    float amount;
    
    public:
    void getdata()
    {
        cout<<"Enter customer name:";
        cin>>customer_name;
        cout<<"Enter customer ID:";
        cin>>customer_Id;
        cout<<"Enter Address:";
        cin>>Address;
        cout<<"Enter units:";
        cin>>units;
    }
    void calculate()
    {
        if(units<=100)
        amount=0;
    else if(units<=200)
     amount=(units-100)*2.25;
    else if(units<=400)
     amount=100*2.25+(units-200)*4.5;
    else if(units<=600)
     amount=100*2.25+200*4.5+(units-400)*6;
    else
     amount=100*2.25+200*4.5+200*6+(units-600)*9;
    }
    void print()
    {
        cout<<"\nName:"<<customer_name;
        cout<<"\nID:"<<customer_Id;
        cout<<"\nAddress:"<<Address;
        cout<<"\nUnits:"<<units;
        cout<<"\nAmount:"<<amount;
    }
     
};
int main()
{
    EB e;
    e.getdata();
    e.calculate();
    e.print();
}