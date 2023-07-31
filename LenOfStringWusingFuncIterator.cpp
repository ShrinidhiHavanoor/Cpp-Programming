#include<iostream>
#include<string>
using namespace std;
int main()
{
    int count=0;
    string s="Hello World";
    string::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        count++;
    }

    cout<<"The length of the string is="<<count<<endl;
    return 0;
}