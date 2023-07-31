#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the length of the square matrix:-"<<endl;
    cin>>n;
    int a[n][n];
    cout<<"Enter the elements:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"The entered matrix is:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"After converting to lower tringular matrix:-"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
            cout<<a[i][j]<<" ";
            else
            cout<<"0 ";
        }
        cout<<endl;
    }
}