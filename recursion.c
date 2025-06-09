#include <stdio.h>
unsigned long long factorial(short n) {
    if (n > 1) {
        return factorial(n-1)*n; // n! = n*(n-1)!
    }
    else {
        return 1; // 1! = 1
    }
}
int main() {
    for (short i = 1; i <= 20; i++) { // Test every value 1 - 20
        printf("%hi factorial = %llu\n", i, factorial(i));
    }
    return 0;
}