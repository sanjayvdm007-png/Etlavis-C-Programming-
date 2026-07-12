//Write a program get number from user print the total number of two-digit odd numbers in the number.

#include <stdio.h>

int main() 
{
    int no, count = 0;
    
    scanf("%d", &no);
    
    if (no < 0) {
        no = -no;
    }

    while (no >= 10) 
    {
        int pair = no % 100;
        
        if (pair >= 10 && pair % 2 != 0) 
        {
            count++;
        }
        
        no = no / 10;
    }
    
    printf("%d\n", count);

}
