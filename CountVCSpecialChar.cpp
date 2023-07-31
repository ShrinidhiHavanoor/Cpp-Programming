#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    int v,c,h;
    string s;
    cout<<"Enter the string:->"<<endl;
    getline(cin,s);
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]=='A' ||  s[i]=='E'||  s[i]=='I' || s[i]=='O' || s[i]=='U' || 
           s[i]=='a' || s[i]=='e' ||  s[i]=='i' ||  s[i]=='o' || s[i]=='u' )
           {
               v++;
           }
           else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
           {
               c++;
           }
            else if(s[i]>='1' && s[i]<='9')
            {
                h++;
            }
    }  
    cout<<"The number of vowels in the sentence:->"<<v<<endl;
    cout<<"The number of consonents in the sentence:->"<<c<<endl;
    cout<<"The number of special characters in the sentence:->"<<h<<endl;
    return 0;
}