#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
    string s2;
    cout<<"ENTER A STRING"<<endl;
    getline(cin,s1);
    int len=s1.length();
    s2.resize(len);
    for(int i=0,j=len-1;i<len;i++,j--)
    {
        s2[i]=s1[j];
    }
    s2[len]='\0';
    if(s2.compare(s1)==0)
    cout<<"Palindrome"<<endl;
    else
    cout<<"Not a palindrome"<<endl;
    return 0;
}