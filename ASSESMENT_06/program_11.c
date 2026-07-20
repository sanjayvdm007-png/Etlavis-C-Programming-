//Write a program to get a 4-digit number from user, print whether that number's middle two digits (hundred's digit and ten's digit) is prime.

#include <stdio.h>

int main() 
{
    int no, b;
    scanf("%d", &no);
    
    b = (no / 10) % 100;
    
    int is_prime = 1;
    
    if (b <= 1) {
        is_prime = 0;
    } else {
        for (int i = 2; i * i <= b; i++) {
            if (b % i == 0) {
                is_prime = 0;
                break;
            }
        }
    }
    
    if (is_prime) {
        printf("Output - Prime\n");
    } else {
        printf("Output - Not Prime\n");
    }
    
    return 0;
}
