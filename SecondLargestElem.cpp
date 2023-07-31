#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n,max2;
    int max=INT_MIN;
    cout<<"Enter n"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
       if(a[i]>max)
       {
           max2=max;
           max=a[i];
       }
       else if(a[i]>max2 && a[i]<max)
       {
           max2=a[i];
       }
    }
    cout<<"The second largest elements is="<<max2<<endl;
    return 0;
    
}