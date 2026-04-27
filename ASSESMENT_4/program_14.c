//Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd, then subtract 1 from the last digit and print the number. (Note: Last digit -MSB)

#include<stdio.h>
#include<math.h>

int main()
{
    int no, digit = 0;
    scanf("%d", &no);
    

    if (no == 0) {
        printf("0");
        return 0;
    }

    int temp = no;
    while(temp != 0)
    {
        digit++;
        temp = temp / 10;
    }

    int p = pow(10, (digit - 1));
    int first = no / p;

    if(first % 2 == 0)
    {
        printf("%d", no); 
    }
    else
    {
        int final = ((first - 1) * p) + (no % p);
        printf("%d", final); // 
    }

    return 0;
}
