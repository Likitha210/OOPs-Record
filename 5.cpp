#include<iostream>
using namespace std;
class Book
{
    private:
    int Acc_no,pages;
    char Book_name[50],Author[50],ISB_no[20];
    float price;
    
    public:
    void getdata()
    {
        cout<<"Enter Book Name:";
        cin>>Book_name;
        cout<<"Enter Author Name:";
        cin>>Author;
        cout<<"Enter ISB No:";
        cin>>ISB_no;
        cout<<"Enter Acc_no:";
        cin>>Acc_no;
        cout<<"Enter No.Of pages:";
        cin>>pages;
        cout<<"Enter Price:";
        cin>>price;
    }
    void print()
    {
        cout<<"\nBook Name :"<<Book_name;
        cout<<"\nAuthor :"<<Author;
        cout<<"\nISB_no:"<<ISB_no;
        cout<<"\nAcc_no :"<<Acc_no;
        cout<<"\nPages :"<<pages;
        cout<<"\nPrice:"<<price;
    }
};
int main()
{
    Book b[100];
    int i,n;
    cout<<"Enter n value:";
    cin>>n;
    for(i=0;i<n;i++)
    {
    b[i].getdata();
    }
    for(i=0;i<n;i++)
    {
    b[i].print();
    }
}