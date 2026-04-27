//Get a two-digit number from the user, make the one's digit 0, then print it.

#include<stdio.h>
int main()
{
    int no;
    scanf("%d",&no);
    printf("%d",(no/10)*10);
}

