#include<iostream>
#include<string>
using namespace std;
class BP
{
    private:
       int age,hp,hr;
       string name,bloodgroup;
    public:
    void getdata()
    {
        cout<<"Enter patient name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter blood group:";
        cin>>bloodgroup;
        cout<<"Enter heart pumping rate:";
        cin>>hp;
        cout<<"Enter heart resting rate:";
        cin>>hr;
    }
    void result()
    {
        if(hp>120)
        cout<<"High Blood pressure.\n";
    else if(hr<80)
    cout<<"Low Blood pressure.\n";
    else 
    cout<<"Blood pressure is normal.\n";
    }
};
int main()
{
    BP b;
    b.getdata();
    b.result();
}
