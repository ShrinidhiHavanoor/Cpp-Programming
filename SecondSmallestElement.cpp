#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n,min2;
    int min1=INT_MAX;
    cout<<"Enter n"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min1)
        {
            min2=min1;
            min1=a[i];
        }
        else if(a[i]>min1 && a[i]<min2)
        {
            min2=a[i];
        }
    }
    cout<<"The second smallest element is="<<min2<<endl;
    return 0;
}