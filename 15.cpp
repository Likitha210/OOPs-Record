#include<iostream>
using namespace std;
class Student2;
class Student1
{
    private:
      int marks;
    public:
      Student1()
      {
        cout<<"Enter marks:";
        cin>>marks;
      }
      friend void comparemarks(Student1,Student2);
};
class Student2
{
    private:
      int marks;
    public:
      Student2()
      {
        cout<<"Enter marks:";
        cin>>marks;
      }
      friend void comparemarks(Student1,Student2);
};
void comparemarks(Student1 a, Student2 b)
{
  if(a.marks>b.marks)
    cout<<"The marks of Student2 is less than Student1.\n";
    else if(a.marks<b.marks)
       cout<<"The marks of Student1 is less than Student2.\n";
    else
       cout<<"The marks of both students is equal.\n";
}
int main()
{
    Student1 s1;
    Student2 s2;
    comparemarks(s1,s2);
    return 0;
}