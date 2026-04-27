//Get a four-digit number from user and only reverse the last two digits of the number, then print the number.

#include<stdio.h>
int main()
{
    int no,reverse;
    scanf("%d",&no);
    int third=(no/10)%10;
    int fourth=no%10;
    int first=no/100;
    printf("%d",(first*100)+(fourth*10)+third);

}