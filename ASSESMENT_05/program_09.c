//Write a program get number from user print the total number of single-digit perfect square numbers in the number.

#include<stdio.h>
int main()
{
    int no,a,count=0;
    scanf("%d",&no);
    while(no!=0)
    {
        a=no%10;
        if(a==1 || a==4 || a==9)
        {
            count++;
        }
        no=no/10;
    }
    printf("%d",count);
}