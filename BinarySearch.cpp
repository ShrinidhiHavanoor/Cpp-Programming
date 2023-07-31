#include <iostream>
using namespace std;
int main()
{
    int n,key,mid;
    cout<<"Enter number of terms used in the array-->"<<endl;
    cin>>n;
    int l=0,h=n;
    int a[n];
    cout<<"Enter the elements of the array-->"<<endl;
    for(auto &x:a)
    cin>>x;
    cout<<"Enter the key to find-->"<<endl;
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==a[mid])
        {
            cout<<"KEY FOUND AT "<<mid+1;
            return 0;
        }
        else if(key<a[mid])
        h=mid-1;
        else
        l=mid+1;
    }
    cout<<"KEY NOT FOUND"<<endl;
}