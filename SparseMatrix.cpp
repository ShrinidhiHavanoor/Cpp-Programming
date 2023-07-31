#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the value of n->"<<endl;
    cin>>n;
    int a[n][n];
    cout<<"Enter the matrix->"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i][j]==0)
            {
                count++;
            }
        }
    }
    if(count>((n*n)/2))
    cout<<"It is a sparse matrix"<<endl;
    else
    cout<<"It is not a sparse matrix"<<endl;
}