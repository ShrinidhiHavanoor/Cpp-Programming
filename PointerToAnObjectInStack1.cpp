#include <iostream>
using namespace std;
class rectangle
{
    public:
    int length,breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r1;
    rectangle *p=new rectangle();
    cout<<"Enter the length of the rectangle->"<<endl;
    cin>>p->length;
    cout<<"Enter the breadth of the rectangle"<<endl;
    cin>>p->breadth;
    cout<<"Area is->"<<p->area()<<endl;
    cout<<"Perimeter is->"<<p->perimeter()<<endl;
}