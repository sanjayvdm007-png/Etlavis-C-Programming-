//Write a loop program to print the sum of two-digit odd numbers, whose ten's digit is 7.

#include<stdio.h>
int main()
{
    int no,sum=0;
    for(no=10;no<=99;no++)
    {
        if((no%2)!=0)
        {
            if((no/10)==7)
            {
                sum=sum+no;
            }
        }
    }
    printf("%d",sum);

}