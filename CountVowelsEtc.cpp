#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    int c=0,v=0,h=0;
    char s[100]="Hello World";
    for(int j=0;s[j]!='\0';j++)
    {
        if(s[j]=='A' || s[j]=='E' || s[j]=='I' ||  s[j]=='O' || s[j]=='U' || 
           s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
           v++;
           else if(s[j]==' ')
           h++;
           else 
           c++;
    }
cout<<"The number of vowels in the sentence="<<v<<endl;    
cout<<"The number of consonents in the sentence="<<c<<endl;
cout<<"The number of words in the sentence="<<h+1<<endl;
cout<<"The number of spaces in the sentence="<<h<<endl;
}