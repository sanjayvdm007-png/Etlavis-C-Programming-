//Write a program to get a number from user, print whether that number is prime, and sum of digit is equal to 14.

#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, temp, sum = 0;
    bool isPrime = true;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }


    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        printf("Output - Prime ");
    else
        printf("Output - Not Prime ");

    // Sum Check
    if (sum == 14)
        printf("& sum of digits is 14\n");
    else
        printf("& sum of digits is not 14\n");

    return 0;
}
