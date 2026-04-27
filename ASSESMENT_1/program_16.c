//Get a two-digit number from the user, make the ten's digit 1, and then print it.

#include<stdio.h>
int main()
{
    int no;
    scanf("%d",&no);
    printf("%d",(10+(no%10)));
}