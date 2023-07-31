#include<iostream>
using namespace std;
int main()
{
    int n,i,j,c=1;
    cout<<"Enter the number of elements you want to use:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The required result is:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n;j++)
        {
            c=1;
            {
                if(a[i]==a[j])
                c++;
            }
        }
        cout<<a[i]<<" occurs "<<c<<" times"<<endl;
    }
}