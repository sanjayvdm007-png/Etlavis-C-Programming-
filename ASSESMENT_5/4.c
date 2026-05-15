//Write a program to get number from user, print whether that number's first two digits (ten's digits and one's digit) is prime.


#include <stdio.h>
#include <math.h>

int main() {
    int num, tens, ones, i, t_prime = 1, o_prime = 1;

    printf("Input: ");
    scanf("%d", &num);

    ones = num % 10;
    tens = (num / 10) % 10;

    if (tens <= 1) t_prime = 0;
    for (i = 2; i <= sqrt(tens); i++) {
        if (tens % i == 0) t_prime = 0;
    }

    if (ones <= 1) o_prime = 0;
    for (i = 2; i <= sqrt(ones); i++) {
        if (ones % i == 0) o_prime = 0;
    }

    if (t_prime && o_prime) {
        printf("Output - Prime\n");
    } else {
        printf("Output - Not Prime\n");
    }

    return 0;
}

