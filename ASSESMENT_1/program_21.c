//Get a three-digit number from the user and subtract five from that number if one's digit number and 100's digit number are odd, then print the result. Do not use "if".

#include<stdio.h>
int main()
{
    int no1,no2;
    scanf("%d",&no1);
    no2=no1-(5*((no1%10)%2)*((no1/100)%2));
    printf("%d",no2);
}