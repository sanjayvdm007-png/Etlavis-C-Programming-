//Write a loop program to print the two-digit odd numbers, below 20.

#include<stdio.h>
int main()
{
    int no=1;
    while(no<20)
    {
        if(no%2!=0 && no>10)
        {
            printf("%d\n",no);
        }
        no++;
    }
    
}