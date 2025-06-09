#include <stdio.h>
int main() {
    long long ll = -1000000000; // -1 Billion
    unsigned long long ull = ll; // Attempt to place the long long into an ull
    long l = ll; // Attempt to place the long long into a long
    int i = ll; // Attempt to place the long long into an int
    short s = ll; // Attempt to place the long long into a short
    printf("Original long long: %lli\n", ll);
    printf("Unsigned long long: %llu\n", ull);
    printf("Long: %li\n", l);
    printf("Integer: %i\n", i);
    printf("Short: %hi\n", s);
    return 0;
}