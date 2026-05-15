//Write a loop program to print the sum of two-digit numbers whose one's digit is 5.

#include<stdio.h>
int main()
{
    int no,sum=0;
    for(no=10;no<=99;no++)
    {
        
        if((no%10)==5)
        {
            sum=sum+no;

        }
    }
    printf("%d",sum);
}