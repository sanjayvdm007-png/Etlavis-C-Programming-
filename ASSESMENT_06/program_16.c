//Write a program to print biggest 4-digit number which is divisible by 7 and 9.

#include<stdio.h>
int main()
{
    int no;
    for(no=9999;no>=1000;no--)
    {
        if(no%7==0 && no%9==0)
        {
            printf("%d",no);
            break;
        }
    }
}