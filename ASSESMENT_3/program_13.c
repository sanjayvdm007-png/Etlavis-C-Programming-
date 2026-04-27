//Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different. If yes, print "Success"; otherwise, print "Failure"

#include <stdio.h>

int main() {
    int number, digit0, digit1;

    
    printf("Enter a number: ");
    scanf("%d", &number);


    digit0 = number / 100;


    digit1 = number % 100;

    if (digit1 == digit0) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }

    return 0;
}
