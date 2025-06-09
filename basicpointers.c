#include <stdio.h>
int main() {
    int num = 5;
    int* ptr = &num;
    printf("num: %d\n", num);
    printf("Memory address of num: %p\n",&num);
    printf("Pointer address: %p\n",ptr);
printf("Value at pointer (dereferenced): %d\n",*ptr);
(*ptr) ++;
printf("Value at pointer (dereferenced): %d\n",*ptr);
(*ptr) -= 3;
printf("Value at pointer (dereferenced): %d\n",*ptr);
(*ptr) *= 2;
printf("Value at pointer (dereferenced): %d\n",*ptr);
return 0;
}