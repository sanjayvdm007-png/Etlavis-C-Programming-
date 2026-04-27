//Write a program to get a number from user print the total number of digits in that number

#include <stdio.h>

int main() {
    int digit=0,no;
    scanf("%d",&no);
    while(no!=0){
        no=no/10;
        digit++;
    }
    printf("%d",digit);


    
}