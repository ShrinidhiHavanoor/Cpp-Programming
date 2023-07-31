#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char s[1000]="Hello World";
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            s[i]-=32;
        }
    }
    cout<<"After the change of case="<<s<<endl;
    return 0;
}