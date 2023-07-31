// c program to find the union of the numbers
#include <stdio.h>
void main()
{
    union number
    {
        int n1;
        float n2;
    };
    union number x;
    printf("Enter the value of n1:");
    scanf("%d",&x.n1);
    printf("n1=%d",x.n1);
    printf("\nEnter the value of n2:");
    scanf("%f",&x.n2);
    printf("n2=%f",x.n2);
}