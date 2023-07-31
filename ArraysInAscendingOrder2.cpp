#include <iostream>
using namespace std;
int main()
{
    int n,temp;
    cout<<"Enter the number of elements you want to use:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"The required output is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1/*very imp*/;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        cout<<a[i]<<endl;
    }
    
}