#include <iostream>
using namespace std;
int main()
{
    float disamount,billamount;
    disamount=0.0;
    cout<<"Enter the Billamount\n";
    cin>>billamount;
    if(billamount>=500)
    {
        disamount=billamount*20/100;
    }
    else if(billamount>=100 && billamount<500)
    {
        disamount=billamount*10/100;
    }
    cout<<"Billamount="<<billamount;
    cout<<"\nDiscounted amount="<<disamount;
    cout<<"\nNew Bill amount is="<<billamount-disamount;
}