#include<iostream>
#include<string>
using namespace std;
class Payslip
{
    private:
    int emp_no, basic_pay, da, hra, epf, gpy, total_ded, net_pay,p_tax;
    string name, dept, design, bank_no, pan_no;

    public:
    void getdetails()
    {
        cout<<"Enter Employee number:";
        cin>>emp_no;
        cout<<"Enter Employee name:";
        cin>>name;
        cout<<"Enter Employee's department:";
        cin>>dept;
        cout<<"Enter Designation:";
        cin>>design;
        cout<<"Enter Bank account number:";
        cin>>bank_no;
        cout<<"Enter Basic pay:";
        cin>>basic_pay;
        cout<<"Enter Pan no:";
        cin>>pan_no;
    }
    void calculate()
    {
        da=basic_pay/100*80;
        hra=basic_pay/100*10;
        gpy=basic_pay+da+hra;
        epf=(basic_pay+da)/100*12;
        p_tax=(basic_pay)/100*2;
        total_ded=epf+p_tax;
        net_pay=gpy-total_ded;

    }
    void print()
    {
        cout<<"\n EMPLOYEE NO:"<<emp_no;
        cout<<"\n EMPLOYEE NAME:"<<name;
        cout<<"\n DESIGNATION:"<<design;
        cout<<"\n DEPARTMENT:"<<dept;
        cout<<"\n BANK ACCOUNT NUMBER:"<<bank_no;
        cout<<"\n BASIC PAY:"<<basic_pay;
        cout<<"\n PAN NUMBER:"<<pan_no;
        cout<<"\n NET PAY:"<<net_pay;
    }
};
int main()
{
    Payslip p;
    p.getdetails();
    p.calculate();
    p.print();
}