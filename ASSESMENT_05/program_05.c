//Write a program to get a 4-digit number from user, print whether that number's middle two digits (hundred's digit and ten's digit) is prime.

#include <stdio.h>

int main() {
    int no, check, a, b;
    
    
    scanf("%d", &no);
    
    
    a = (no / 10) % 100;
    
    if (a < 2) {
        check = 1; 
    } else {
        
        for (b = 2; b <= a / 2; b++) {
            if (a % b == 0) {
                break;
            }
        }
    }
    if (check == 0) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}