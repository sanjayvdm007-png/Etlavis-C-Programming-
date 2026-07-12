//Write a program print total number of single digit Prime numbers

#include <stdio.h>

int main() {
    int a, b, count = 0, check;
    
    for (a = 2; a <= 9; a++) {
        check = 0;
        
        for (b = 2; b <= (a / 2); b++) {
            if (a % b == 0) {
                check = 1;
                break;
            }
        }

        if (check == 0) {
            count++;
        }
    }
    
    printf("%d", count);
    return 0;
}
