#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    string s;
    cout<<"Enter your string:->"<<endl;
    getline(cin,s);
    int l=s.length();
    cout<<"After sorting:->"<<endl;
    for(int i=0;i<l;i++)
    {
        for(int j=1;j<l;j++)
        {
            if(s[j]>s[j+1])
            {
                int temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}