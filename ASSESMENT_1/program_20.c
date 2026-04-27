//Get a two-digit number from user and subtract 5 from that number if the sum of the digits of the number is odd, then print the result. Do not use "if".

#include<stdio.h>
int main()
{
    int no,sum=0;
    scanf("%d",&no);
    sum=(no/10)+(no%10);
    printf("%d",no-(5*(sum%2)));

}