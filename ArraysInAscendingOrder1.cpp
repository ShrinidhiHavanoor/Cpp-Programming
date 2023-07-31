#include <iostream>
using namespace std;
int main()
{
    int n,i,j,min=0;
    cout<<"Enter the number of elements you want to use:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        int c=5;
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                c=0;
                min=a[j];
                a[j]=a[j+1];
                a[j+1]=min;
            }
        }
        if(c==5)
        break;
    }
    for(i=0;i<n;i++)
    cout<<a[i]<<endl;
}