//Get a three-digit number from the user and print the reverse of the number.

#include<stdio.h>
int main()
{
    int no,reverse;
    scanf("%d",&no);
    reverse=(no%10)*100+((no/10)%10)*10+(no/100);
    printf("%d",reverse);
    
    
    
}