//Get a three-digit number from the user and print the sum of the digits.

#include<stdio.h>
int main()
{
    int no,sum;
    scanf("%d",&no);
    sum=(no%10)+(no/100)+(no/10)%10;
    printf("%d",sum);
    
    
}