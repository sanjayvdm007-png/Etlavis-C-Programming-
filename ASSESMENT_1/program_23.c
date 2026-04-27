//Get a three-digit number from the user and make the ten's digit as 0, then print it.

#include <stdio.h>

int main() {
    int num, hundreds, units, result;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    
    hundreds = num / 100;
    units = num % 10;

    
    result = (hundreds * 100) + units;

    printf("Output: %d\n", result);

    
}
