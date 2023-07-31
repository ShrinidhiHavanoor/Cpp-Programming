#include<iostream>
using namespace std;
int main()
{
    int n,pos;
    cout<<"Enter n:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the array:"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter pos:"<<endl;
    cin>>pos;
    cout<<"After deletion:"<<endl;
    for(int i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    for(int i=0;i<n-1;i++)
    cout<<a[i]<<" ";
}