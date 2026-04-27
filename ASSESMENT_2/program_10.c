//Get a two-digit number from the user and check if the digit 0 is greater than the digit 1. If yes, print 1; otherwise, print 0

#include<stdio.h>
int main()
{
    int no;
    scanf("%d",&no);
    if((no%10)>(no/10))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }


    
}