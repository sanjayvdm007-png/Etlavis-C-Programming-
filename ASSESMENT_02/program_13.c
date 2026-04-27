//Get a four-digit number from the user and check if the digit 1 and digit 0 are the same and if digit 1 and digit 0 are different. If yes, print 1; otherwise, print 0

#include <stdio.h>

int main() {
    int num, digit0, digit1;

    
    scanf("%d", &num);

    
    digit0 = num % 10;
    
    
    digit1 = (num / 10) % 10;

    
    if (digit1 == digit0) {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}
