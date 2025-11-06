#include<iostream>
using namespace std;
template <class T>
class box
{
    private:
    T item;
    public:
    box(T i)
    {
        item =i;
    }
    void show()
    {
        cout<<"item:"<<item;
    }
};
int main()
{
    box <int> intbox(100);
    box <string> strbox("Hello");
    intbox.show();
    strbox.show();
    return 0;
}