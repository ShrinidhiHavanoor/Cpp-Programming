#include <iostream>
using namespace std;
int main()
{
    int n,i,j,c=0;
    cout<<"Enter the number of elements used:"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The Unique numbers are:"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j])
                {
                    c++;
                }
            }
        }
        if(c==0)
        cout<<a[i]<<" ";
    }
    return 0;
}