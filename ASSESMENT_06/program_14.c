//Write a program get number from user print the total number of two-digit perfect square numbers in the number.

#include<stdio.h>
int main()
{
    int no,a,b,c=0;
    int arr[10]={16,25,36,49,64,81};
    scanf("%d",&no);
    a=no;
    while(a!=0)
    {
        b=a%100;
        for(int i=0;i<=5;i++)
        {
            if(b==arr[i])
            {
                c++;
            }
        }
        a=a/10;
    }
    printf("%d",c);
}

