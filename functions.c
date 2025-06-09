#include <stdio.h>
double c_to_f(double c) {
    return c*1.8+32.0;
}
void hello() {
    printf("Hello, World!\n");
}
int main() {
    hello();
    // They can be called more than once
    hello();
    printf("%lf Fahrenheit\n", c_to_f(10)); // 10 degrees in F
    return 0;
}