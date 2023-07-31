#include <iostream>
using namespace std;
class complex
{
    public:
    int real;
    int img;
    complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    complex operator+(complex x)
    {
        complex t;
        t.real=real+x.real;
        t.img=img+x.img;
        return t;
    }
};
int main()
{
    complex c1(3,4),c2(5,8),c3;
    c3=c1+c2;
    cout<<c3.real<<"+i"<<c3.img<<endl;
}