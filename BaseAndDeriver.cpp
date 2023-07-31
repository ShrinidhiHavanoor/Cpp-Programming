#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Default of base"<<endl;
    }
    base(int x)
    {
        cout<<"Parameter of base"<<endl;
    }
};
class derived:public base
{
    public:
    derived()
    {
        cout<<"Default of derived"<<endl;
    }
    derived(int y)
    {
        cout<<"Parameter of derived"<<endl;
    }
    derived(int x,int y):base(x)
    {
        cout<<"Parameter of derived"<<endl;
    }
};
int main()
{
    derived d(4,5);
}