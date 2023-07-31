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
    cout<<"Enter the length of the rectangle->"<<endl;
    cin>>r1.length;
    cout<<"Enter the breadth of the rectangle"<<endl;
    cin>>r1.breadth;
    cout<<"Area is->"<<r1.area()<<endl;
    cout<<"Perimeter is->"<<r1.perimeter()<<endl;
}