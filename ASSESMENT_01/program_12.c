// /Get a two-digit number from user and print the reverse of the number.


#include<stdio.h>
int main()
{
    int no,reverse;
    scanf("%d",&no);
    reverse=(no%10)*10+(no/10);
    printf("%d",reverse);

}