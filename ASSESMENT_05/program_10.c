//Write a program get number from user print the total number of two-digit perfect square numbers in the number.

#include<stdio.h>
int main()
{
    int no,a,count=0;
    scanf("%d",&no);
    while(no!=0)
    {
        a=no%100;
        if (a == 16 || a == 25 || a == 36 || a == 49 || a == 64 || a == 81)
        {
            count++;
        }
        no=no/10;


    }
    printf("%d",count);

}