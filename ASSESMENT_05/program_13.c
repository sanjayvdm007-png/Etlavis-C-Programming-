//Write a program to print the total count of numbers which are less than  and whose sum of digits is 14

#include <stdio.h>

int main()
{
    int no, i, count = 0, sum;
    
    for(no = 1; no < 100000; no++)
    {
        sum = 0;
        int temp = no;
        
        while(temp != 0)
        {
            i = temp % 10;
            sum = sum + i;
            temp = temp / 10;
        }
        
        if(sum == 14)
        {
            count++;
        }
    }
    
    printf("%d\n", count);
    return 0;
}
