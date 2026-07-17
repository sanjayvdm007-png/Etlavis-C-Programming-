//Write a program to get a number from user and interchange the first and last digits and print the result.

#include <stdio.h>
#include <math.h>

int main() {
    int no, a, c = 0;
    
    scanf("%d", &no); 
    
    int last = no % 10;
    a = no;
    
    while (a != 0) {
        c++;
        a = a / 10;
    }
    
    int first = no / (int)pow(10, (c - 1));
    
    int middle = (no % (int)pow(10, (c - 1))) / 10;
    int result = last * (int)pow(10, c - 1) + middle * 10 + first;
    
    printf("%d", result);
    
    return 0; 
}
