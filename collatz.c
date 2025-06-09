#include <stdio.h>
int main() {
    unsigned int num;
    unsigned short iterations = 0;
    printf("Enter number: ");
    scanf("%u", &num);
    while (num > 1) {
        if (num % 2) {
            num *= 3;
            num ++;
        }
        else {
            num /= 2;
        }
    printf("Iteration %hu: %u\n",++iterations, num);
    }
}