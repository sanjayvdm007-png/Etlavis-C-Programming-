//Write a program to get a number from user and print the sum of all digits.

#include <stdio.h>

int main() {
    int num, sum = 0, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while (num != 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    
    printf("Sum of all digits: %d", sum);
    
    return 0;
}