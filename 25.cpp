#include<iostream>
using namespace std;
class Student
{
    public:
    int id;
    void setid(int i)
    {
        id=i;
    }
    void showid()
    {
        cout<<"ID:"<<id<<endl;
    }
};
int main()
{
    Student *p =new Student[3];
    for(int i=0;i<3;i++)
    {
        p[i].setid(i+1);
    }
    for(int i=0;i<3;i++)
    {
        p[i].showid();
    }
    delete[] p;
    return 0;
}