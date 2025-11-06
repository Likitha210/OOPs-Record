#include<iostream>
#include<string>
using namespace std;
class Patient
{
    private:
    int age, r1, r2;
    string name, blood_group, gender;

    public:
    void getdata()
    {
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Age:";
        cin>>age;
        cout<<"Enter Gender:";
        cin>>gender;
        cout<<"Enter Blood Group:";
        cin>>blood_group;
        cout<<"Enter Readings:";
        cin>>r1>>r2;
    }
    void calculate()
    {
        if(r1>=126||r2>=250)
          cout<<"The patient has diabates.\n";
        else
          cout<<"The patient has no diabates.\n";
    }
    void display()
    {
        cout<<"\n NAME:"<<name;
        cout<<"\n AGE:"<<age;
        cout<<"\n GENDER:"<<gender;
        cout<<"\n BLOOD GROUP:"<<blood_group;
        cout<<"\n BEFORE MEAL READINGS:"<<r1;
        cout<<"\n AFTER MEAL READINGS:"<<r2; 

    }
};
int main()
{
    Patient p;
    p.getdata();
    p.calculate();
    p.display();
}