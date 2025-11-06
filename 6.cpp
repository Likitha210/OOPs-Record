#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    int rollno;
    string name;

    public:
    student()
    {
        cout<<"Enter Student Name:";
        cin>>name;
        cout<<"Enter Roll no:";
        cin>>rollno;
    }
    student(int r,string n)
    {
        rollno=r;
        name=n;
    }
    student(student &s)
    {
        rollno=s.rollno;
        name=s.name;
    }
    ~student()
    {
        cout<<"\nDestructor is called!";
    }
    void display()
    {
        cout<<"\nRollno:"<<rollno;
        cout<<"\nName:"<<name;
    }
};
int main()
{
    student s1;
    student s2(101,"Gnana");
    student s3=s2;
    s1.display();
    s2.display();
    s3.display();
}