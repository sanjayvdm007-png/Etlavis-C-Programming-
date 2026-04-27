//Write a loop program to print the two-digit even numbers, who's sum of digits are 6.

#include <stdio.h>

int main() {
    int a, tens, ones, sum;
    for (a = 10; a <= 99; a++) {
        

        if (a % 2 == 0) {
            

            tens = a / 10;
            ones = a % 10;
            sum = tens + ones;

            if (sum == 6) {
                printf("%d\n", a);
            }
        }
    }


}