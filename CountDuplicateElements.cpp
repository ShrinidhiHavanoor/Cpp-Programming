#include <iostream>
using namespace std;
int main()//program to count the duplicate elements(less than 2)in the array
{
    int n,i,j,c=0;
    cout<<"Enter the number of elements used:"<<endl;
    cin>>n;
    int a[n];//array
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"The duplicate elements are:";
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            c++;
        }
    }
    cout<<c<<endl;;
}