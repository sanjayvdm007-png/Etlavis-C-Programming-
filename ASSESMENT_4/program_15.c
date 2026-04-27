//Write a program get number from user print whether that number is prime or not.

#include<stdio.h>
int main()
{
    int no,check=0;
    scanf("%d",&no);
    for(int a=2;a<=(no/2);a++)
    {
        if((no%a)==0)
        {
            check=1;
            break;
        }
    }

    if(check==0)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}