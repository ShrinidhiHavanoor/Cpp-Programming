#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char s[1000]="Hello World";
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    cout<<"The length of the string is="<<count<<endl;
    return 0;
}