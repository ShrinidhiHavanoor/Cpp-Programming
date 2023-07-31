#include<iostream>
using namespace std;
int main()
{
    int nets,pera,perd,base;
    cout<<"enter the basic salary:"<<endl;
    cin>>base;
    cout<<"Enter the percentage of allowances:"<<endl;
    cin>>pera;
    cout<<"enter the percentage of deductions:"<<endl;
    cin>>perd;
    nets=base+base*pera/100-base*perd/100;
    cout<<"Net salary="<<nets<<endl;
} // namespace std;