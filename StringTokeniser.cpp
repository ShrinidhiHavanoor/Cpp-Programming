#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[50]="HII,Bro HOW ARE YOU";
    char *p=strtok(s1," ");
    while(p!=NULL)
    {
        cout<<p<<endl;
        p=strtok(NULL," ");
    }
    return 0;
}