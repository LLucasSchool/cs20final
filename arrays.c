#include <stdio.h>
int main() {
    int manta[] = {6, 9, 4, 2, 0};
    printf("%d\n", manta[0]); // first element
    printf("%d\n", manta[4]); // final element
    printf("%d\n", manta[5]); // one element past the end of the array - possible SEGFAULT
    printf("%p\n", manta); // Manta pointer
    printf("%d\n", *manta); // Dereferenced manta pointer
    return 0;
}
