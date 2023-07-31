#include <iostream>
using namespace std;
int main()
{
    int n,m,i=0;
    cout<<"Enter the Start year"<<endl;
    cin>>n;
    cout<<"Enter the End year"<<endl;
    cin>>m;
    if(n<m)
    {
        for(i=n;i<=m;i++)
        {
            if(((i%4==0) && (i%100!=0)) || (n%400==0))
            cout<<i<<" ";
        }
    }
    else
    cout<<"!!!Invalid Entry!!!";
}