//Write a program get number from user print the total number of single-digit prime numbers in the number.

#include<stdio.h>
int main()
{
    int no,a,b,c=0,d;
    scanf("%d",&no);
    a=no;
    while(a!=0)
    {
        d=0;
        b=a%10;
        for(int i=2;i<=b/2;i++)
        {
            if(b%i==0)
            {
                d=1;
                break;
            }
        }
        if(d==0)
        {
            c++;
        }
        a=a/10;
    }
    printf("%d",c);
}