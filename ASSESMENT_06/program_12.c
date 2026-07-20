//Write a program get number from user print the total number of two-digit odd numbers in the number.

#include <stdio.h>

int main() {
    int no, a, b, c = 0;
    
    scanf("%d", &no);
    
    a = no;
    while (a != 0) {
        b = a % 100;
        
        if (b >= 10 && b % 2 != 0) {
            c++;
        }
        a = a / 10;
    }
    
    printf("%d", c);
    return 0;
}
