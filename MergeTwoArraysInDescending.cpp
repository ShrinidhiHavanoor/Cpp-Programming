#include <iostream>
using namespace std;
int main()
{
    int n,m,i,k=0,max=0,temp;
    cout<<"Enter the elements used in the 1st array:"<<endl;
    cin>>n;
    cout<<"Enter the elements used in the 2nd array:"<<endl;
    cin>>m;
    int a[n],b[m],c[m+n];
    cout<<"Enter the elements of 1st array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        c[i]=a[i];
    }
    cout<<"Enter the elements of the 2nd array:"<<endl;
    for(i=0;i<m;i++)
    {
        cin>>b[i];
        c[n+i]=b[i];
    }
    cout<<"Merged array"<<endl;//printing the merged array
    for(i=0;i<m+n;i++)
    cout<<c[i]<<" ";
    cout<<endl<<"In descending order:"<<endl;//display two arrays in descending order
    for(i=0;i<m+n;i++)
    {
        for(int j=i+1;j<=m+n;j++)
        {
            if(c[i]<c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    for(i=0;i<(m+n);i++)
    cout<<c[i]<<" ";
    return 0;
}