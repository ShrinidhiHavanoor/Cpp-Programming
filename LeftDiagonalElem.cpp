#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the length of the square matrix:-"<<endl;
    cin>>n;
    int m=n;
    int a[n][n];
    cout<<"Enter the elements:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The entered matrix is="<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        m=m-1;
        for(int j=0;j<n;j++)
        {
            if(j==m)
            {
                sum+=a[i][j];
            }
        }
    }
    cout<<"The sum is="<<sum<<endl;
}