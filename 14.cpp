#include<iostream>
using namespace std;
class Student
{
    private:
     int marks;
     public:
      Student(int m)
       {
        marks=m;
       }
       friend void showmarks(Student s);
};
void showmarks(Student s)
{
  cout<<"Marks:"<<s.marks;
}
int main()
{
Student s1(90);
showmarks(s1);
}