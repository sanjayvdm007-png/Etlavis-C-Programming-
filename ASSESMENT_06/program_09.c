//Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit -MSB)

#include<stdio.h>
#include<math.h>

int main()
{
    int no, a, b, count = 0;
    
    if (scanf("%d", &no) != 1) 
    {
        return 1;
    }
    
    a = no;
    while(a >= 10)
    {
        count++;
        a = a / 10;
    }
    
    if(a % 2 == 0)
    {
        printf("%d", no);
    }
    else
    {
        b = round(pow(10, count)); 
        no = no - b;
        printf("%d", no);
    }

    return 0;
}
