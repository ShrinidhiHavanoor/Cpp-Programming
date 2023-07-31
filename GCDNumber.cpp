#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter two numbers:"<<endl;
    cin>>n>>m;
    while(m!=n)
    {
        if(m>n)
        m=m-n;
        else if(n>m)
        n=n-m;
    }
    cout<<"GCD is="<<m;
}