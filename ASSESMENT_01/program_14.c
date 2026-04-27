//Get a four-digit number from user and only reverse the first two digits of the number, then print the number.

#include<stdio.h>
int main()
{
    int no,reverse;
    scanf("%d",&no);
    int first=no/1000;
    int second=(no/100)%10;
    reverse=(second*1000)+(first*100)+(no%100);
    printf("%d",reverse);

}
