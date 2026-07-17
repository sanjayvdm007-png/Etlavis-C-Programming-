//Write a program to get a number from user and print the sum of all digits.

#include<stdio.h>
int main()
{
    int i,j,sum=0;
    scanf("%d",&i);
    while(i!=0)
    {
        j=i%10;
        sum=sum+j;
        i=i/10;
    }
    printf("%d",sum);
}