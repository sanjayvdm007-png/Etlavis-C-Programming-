//Write a loop program to print sum of 1 to 5

#include<stdio.h>
int main()
{
    int a,sum=0;
    for(a=5;a>=1;a--)
    {
        sum=sum+a;
    }
    printf("%d",sum);
}