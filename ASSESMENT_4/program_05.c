//Write a loop program to print odd number between 1 and 9.

#include<stdio.h>
int main()
{
    int a;
    for(a=1;a<=9;a++)
    {
        if((a%2)!=0)
        {
            printf("%d\n",a);
        }
    }
    return 0;
}