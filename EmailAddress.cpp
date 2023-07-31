#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    cout<<"Please enter your email address:-"<<endl;
    getline(cin,s);
    int i=s.find('@');
    string s1=s.substr(0,i);
    cout<<"------------Your Username is------------"<<endl<<s1;
}