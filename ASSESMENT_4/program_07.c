//Write a loop program to print the two-digit odd numbers, who's sum of digits are 7.

#include <stdio.h>

int main() {
    int a, tens, ones, sum;
    for (a = 10; a <= 99; a++) {
        

        if (a % 2 != 0) {
            

            tens = a / 10;
            ones = a % 10;
            sum = tens + ones;

            if (sum == 7) {
                printf("%d\n", a);
            }
        }
    }


}
