#include <iostream>
using namespace std;
class rectangle
{
    protected:
    int length;
    int breadth;
    public:
    rectangle(int l=0,int b=0)
    {
        setLength(l);
        setBreadth(b);
    }
    void setLength(int l)
    {
        if(l>=0)
        length=l;
        else
        cout<<"Error occured in length"<<endl;
    }
    int getLength()
    {
        return length;
    }
    void setBreadth(int b)
    {
        if(b>=0)
        breadth=b;
        else
        cout<<"Error occured in breadth"<<endl;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
class cubiod: protected rectangle
{
    protected:
    int height;
    public:
    cubiod(int l=0,int b=0,int h=0)
    {
        setLength(l);
        setBreadth(b);
        setHeight(h);
    }
    void setHeight(int h)
    {
        if(h>=0)
        height=h;
        else
        cout<<"Error occured in height"<<endl;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;
    }
};
int main()
{
    cubiod r1(3,4,5);
    cout<<"Volume of the cubiod is->"<<r1.volume()<<endl;
}