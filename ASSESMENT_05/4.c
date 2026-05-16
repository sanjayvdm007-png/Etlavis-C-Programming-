//Write a program to get number from user, print whether that number's first two digits (ten's digits and one's digit) is prime.


#include <stdio.h>

int main()
{
    int no;
    scanf("%d", &no);
    
    int last_two = no % 100;
    if (last_two < 0)
    {
        last_two = -last_two;
    }
    
    int c = 0;
    int x;

    if (last_two <= 1)
    {
        c = 1;
    }
    else
    {
        for (x = 2; x * x <= last_two; x++)
        {
            if (last_two % x == 0)
            {
                c = 1;
                break;
            }
        }
    }
    
    if (c == 0)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
    
    return 0;
}
