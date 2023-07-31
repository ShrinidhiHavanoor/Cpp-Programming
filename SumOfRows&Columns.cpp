#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cout<<"Enter the rows and columns length of the matrix:-"<<endl;
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter the elements of the matrix:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"entered elements of the matrix:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=a[i][j];
        }
        cout<<"     The sum of the rows and columns of "<<i+1<<"th line="<<sum<<endl;
    }
    return 0;
}