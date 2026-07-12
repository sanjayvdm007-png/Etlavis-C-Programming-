//Write a program get number from user print the total number digits which are odd in the number.

#include<stdio.h>
int main()
{
    int no,digit,count=0;
    scanf("%d",&no);
    while(no>0)
    {
        digit=no%10;

        if(digit%2==0)
        {
            count++;
        }
        no=no/10;
    }
    printf("%d",count);
}