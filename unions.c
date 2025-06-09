#include <stdio.h>

union firstunion {
    char letter;
    int number;
};

int main() {
    union firstunion demo;
    demo.letter = 'c';
    printf("Char: %c\n", demo.letter);
    printf("Number: %d\n", demo.number);
    demo.number = 1000;
    printf("Char: %c\n", demo.letter);
    printf("Number: %d\n", demo.number);
}