//Write a loop program to print sum of 6 to 1

#include<stdio.h>
int main()
{
    int a,sum=0;
    for(a=6;a>=1;a--)
    {
        sum=sum+a;
    }
    printf("%d",sum);
}