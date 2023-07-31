#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main()
{
    int n;
    int det=0;
    cout<<"Enter the dimensions of the square matrix:-"<<endl;
    cin>>n;
    int a[n][n];
    cout<<"Enter the elements of the matrix:-"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>a[i][j];
    }
    cout<<"The determinant of the matrix="<<endl;
    for(int i=0;i<n;i++)
    {
        det+=(a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]));  
    }    
    cout<<det<<endl;

    return 0;
}