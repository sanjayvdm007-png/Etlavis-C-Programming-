//Write a program to get number from user, print whether that number's first two digits (ten's digits and one's digit) is prime.

#include<stdio.h>
#include<math.h>
int main()
{
    int no,a,b,c=0,d,check=0;
    scanf("%d",&no);
    a=no;
    while(a!=0)
    {
        c++;
        a=a/10;
    }
    b=no/pow(10,(c-2));
    for(d=2;d<=b/2;d++)
    {
        if(no%d==0)
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
