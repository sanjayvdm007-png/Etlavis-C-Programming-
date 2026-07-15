//Write a program to get three numbers from user and print the LCM of those numbers.

#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int no1, no2, no3;
    
    scanf("%d %d %d", &no1, &no2, &no3);
    
    int gcd1 = gcd(no1, no2);
    int lcm1 = (no1 * no2) / gcd1;
    
    int gcd2 = gcd(lcm1, no3);
    int lcm2 = (lcm1 * no3) / gcd2;
    
    printf("The LCM Of The Numbers Are:%d\n", lcm2);

    return 0;
}

int gcd(int a, int b)
{
    int i, gcd_val = 1;
    for(i = 1; i <= a && i <= b; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            gcd_val = i;
        }
    }
    return gcd_val;
}
