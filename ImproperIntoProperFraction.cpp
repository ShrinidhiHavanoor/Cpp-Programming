#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main()
{
    int num1,denom,rem,num2;
    cout<<"Enter the numerator:-"<<endl;
    cin>>num1;
    cout<<"Enter the denominator:-"<<endl;
    cin>>denom;
    rem=num1%denom;
    num2=(num1-rem)/denom;
    cout<<"The fraction has been converted to mixed fraction:-)"<<endl;
    cout<<num2<<" "<<rem<<"/"<<denom;
    return 0;
}