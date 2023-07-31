#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the value of n->"<<endl;
    cin>>n;
    int a[n][n],b[n][n];
    cout<<"Enter the elements of the first matrix->"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix->"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=b[i][j])
                {
                    cout<<"Both the matrices are not equal"<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"Both the matrices are equal"<<endl;
    return 0;
}