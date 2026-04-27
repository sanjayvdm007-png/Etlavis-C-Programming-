//Get a two-digit number from the user and print the sum of the digits.

#include<stdio.h>
int main()
{
    int no;
    scanf("%d",&no);
    printf("%d",(no%10)+(no/10));
}