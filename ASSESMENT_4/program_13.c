//Write a program to get a number from user and interchange the first and last digits and print the result.

#include<stdio.h>
#include<math.h>

int main()
{
    int first, last, middle, digit=0, no;
    scanf("%d", &no);
    
    int temp = no;
    while(temp != 0)
    {
        digit++;
        temp = temp / 10;
    }


    int p = pow(10, (digit - 1)); 
    
    first = no / p;
    last = no % 10;
    

    middle = (no % p) / 10;
    

    int result = (last * p) + (middle * 10) + first;
    

    if(digit == 1) {
        printf("%d", no);
    } else {
        printf("%d", result);
    }
    
    return 0;
}
