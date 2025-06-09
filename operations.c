#include <stdio.h>
int main() {
    int num = 10;
    num = num + 3; // Add 3
    printf("%d\n", num);
    num /= 2; // Integer division by 2
    printf("%d\n", num);
    num ++; // Increment
    printf("%d\n", num);
    num --; // Decrement
    printf("%d\n", num);
    num *= 2; // Multiply
    printf("%d\n", num);
    num += 5; // More addition
    printf("%d\n", num);
    num -= 7; // More subtraction
    printf("%d\n", num);
    num %= 3; // Modulus
    printf("%d\n", num);
    return 0;
}