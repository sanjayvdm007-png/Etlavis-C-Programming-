//Write a loop program to print the two-digit odd numbers, who's sum of digits are 7.

#include<stdio.h>
int main()
{
    int no=1,i,j,sum;
    while(no<=99)
    {
        if(no%2!=0 && no>9)
        {
            i=no,sum=0;
            while(i!=0)
            {
                j=i%10; 
                sum=sum+j;
                i=i/10;
            }
            if(sum==7)
            {
                printf("%d\n",no);
            }
        }
        no++;
    }
    
}