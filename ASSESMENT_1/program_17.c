//Get a three-digit number from the user, make the one's digit 2, and then print it.

#include<stdio.h>
int main()
{
    int no1,no2;
    scanf("%d",&no1);
    no2=no1/10;
    printf("%d",(no2*10)+2);
    
}