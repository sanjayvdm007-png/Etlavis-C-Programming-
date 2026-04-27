//Get a two-digit number from the user and check if the digit 0 and digit 1 are not identical. If yes, print "Success"; otherwise, print "Failure"

#include <stdio.h>

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    
    if ((num%10)!=(num/10)) {
        printf("Success\n");
    } else {
        printf("Failure\n");
    }

    return 0;
}