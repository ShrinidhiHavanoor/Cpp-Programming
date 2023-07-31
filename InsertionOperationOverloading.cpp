#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;
    public:
    complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    friend complex operator+(complex c1,complex c2);
    friend ostream& operator<<(ostream &os,complex &c2);
};
    complex operator+(complex c1,complex c2)
    {
        complex t;
        t.real=c1.real+c2.real;
        t.img=c1.img+c2.img;
        return t;
    }
    ostream& operator<<(ostream &os,complex &c3)
    {
        os<<c3.real<<"+i"<<c3.img<<endl;
        return os;
    }
    int main()
    {
        complex c1(3,5),c2(2,6),c3;
        c3=c1+c2;
        cout<<c3;
    }