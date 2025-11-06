//Program to print the details of one student
#include<iostream>
using namespace std;
class Student
{
    private:
    int rollno,m1,m2,m3,total;
    char name[50];
    float avg;

    public:
    void getdata()
    {
        cout<<"Enter Roll No:";
        cin>>rollno;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Marks:";
        cin>>m1>>m2>>m3;
    }
    void calculate()
    {
        total=m1+m2+m3;
        avg=total/3;
    }
    void print()
    {
        cout<<"\nRoll No :"<<rollno;
        cout<<"\nName :"<<name;
        cout<<"\nMark1 :"<<m1;
        cout<<"\nMark2 :"<<m2;
        cout<<"\nMark3 :"<<m3;
        cout<<"\nTotal :"<<total;
        cout<<"\nAverage :"<<avg;
    }
};
int main()
{
    Student s;
    s.getdata();
    s.calculate();
    s.print();
}