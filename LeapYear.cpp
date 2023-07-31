#include<iostream>
using namespace std;
int main()
{
    int n;
    printf("PROGRAM TO FIND THE LEAP YEAR\n");
    printf("Enter the year:");
    scanf("%d",&n);
    if(n%4==0)
    {
        if(n%100==0)
        {
            if(n%400==0)
            cout<<"Leap Year"<<endl;
            else
            cout<<"Not a leap year"<<endl;
        }
    }
    else
    cout<<"Not a leap year"<<endl;
}