#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    
    string s="HELLOWORLD";
    string::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        *it=*it+32;
    }

    cout<<"The length of the string is="<<s<<endl;
    return 0;
}