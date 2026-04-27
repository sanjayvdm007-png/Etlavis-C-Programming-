//Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use "if".


#include<stdio.h>
int main()
{
    int no1,no2;
    scanf("%d",&no1);
    no2=no1-(5*(no1%2));
    printf("%d",no2);

    
}