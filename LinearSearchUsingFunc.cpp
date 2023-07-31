#include <iostream>
using namespace std;
int lins(int A[],int n,int key)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(A[i]==key)
        return i;
    }
    if(i==(n-1))
    return 0;
}
    int main()
    {
        int n,key;
        cout<<"Enter the number of elements present in the array:->"<<endl;
        cin>>n;
        int A[n];
        cout<<"Enter the elements of the array:->"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        cout<<"Enter the element to be found:->"<<endl;
        cin>>key;
        int m=lins(A,n,key);
        if(m==0)
        cout<<"Element not found"<<endl;
        else
        cout<<"Element found at index "<<m+1<<endl;
        return 0;
    }