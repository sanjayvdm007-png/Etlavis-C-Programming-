//Get a three-digit number from user. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum, and print the sum. Note: The result should always be a single digit only.

#include<stdio.h>
int main()
{
    int no,sum=0;
    scanf("%d",&no);
    int first=no/100;
    int second=(no/10)%10;
    int third=no%10;

    sum=first+second+third;

    while(sum>=10)
    {
        int temp=0;
        while (sum>0)
        {
            temp=temp+(sum%10);
            sum=sum/10;

        }

        sum=temp;
        

    }

    printf("%d",sum);

}