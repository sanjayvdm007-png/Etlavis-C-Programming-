//Write a loop program to print the two-digit even numbers, who's sum of digits are 6.
#include <stdio.h>

int main() {
    int i;
    for (i = 10; i <= 99; i += 2) {
        int tens = i / 10;
        int ones = i % 10;
        if (tens + ones == 6) {
            printf("%d\n", i);
        }
    }
    return 0;
}
