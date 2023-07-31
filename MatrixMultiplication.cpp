#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main()
{
    int n,m,sum=0;
    cout<<"Enter the dimensions of the first matrix:-"<<endl;
    cin>>n>>m;
    int g,h;
    cout<<"Enter the dimensions of the second matrix:-"<<endl;
    cin>>g>>h;
    while(m!=g)
    {
        cout<<"Error 404:You have not entered the dimensions correctly"<<endl;
        cout<<"1::2::#::404:The columns of the first matrix does not match with the row of the second matrix"<<endl;
        cout<<"----------------------------------------------------------------------------------------------------------------"<<endl;
        cout<<"Again,Please enter the dimensions of the first matrix:-"<<endl;
        cin>>n>>m;
        cout<<"Again,Please enter the dimensions of the first matrix:-"<<endl;
        cin>>g>>h;
    }
    if(m==g)
    {
        int a[n][m];
        cout<<"Enter the elements of the first matrix:-"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin>>a[i][j];
        }
        int b[g][h];
        cout<<"Enter the elements of the second matrix:-"<<endl;
        for(int i=0;i<g;i++)
        {
            for(int j=0;j<h;j++)
            cin>>b[i][j];
        }
        int r[n][h];
        cout<<"After multiplication,The Resultant matrix="<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<h;j++)
            {
                sum=0;
                for(int k=0;k<m;k++)
                {
                    sum+=a[i][k]*b[k][j];//putting k in matrices is very important
                }
                r[i][j]=sum;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<h;j++)
            cout<<r[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}