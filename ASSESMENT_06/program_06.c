//Write a program to get a number from user print the total number of digits in that number

#include<stdio.h>
int main()
{
    int i,count=0;
    scanf("%d",&i);
    while(i!=0)
    {
        count++;
        i=i/10;
    }
    printf("%d",count);
}
