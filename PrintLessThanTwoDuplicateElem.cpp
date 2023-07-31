#include <iostream>
using namespace std;
int main()//program to find the duplicate elements(less than 2)in the array
{
    int n,i,j;
    cout<<"Enter the number of elements used:"<<endl;
    cin>>n;
    int a[n];//array
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"The duplicate elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            cout<<a[i]<<" ";
        }
    }
}