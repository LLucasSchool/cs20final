#include <stdio.h>
int main() {
    FILE *f;
    f = fopen("output.txt", "w");
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
    fprintf(f,"Iteration %hu: %u\n",++iterations, num);
    }
}