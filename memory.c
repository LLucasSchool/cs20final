#include <stdio.h>
#include <stdlib.h>

int main() {
    int* manta;
    manta = malloc(100 * sizeof(*manta));
    manta[50] = 40;
    printf("Value at 50: %d\n", manta[50]);
    // manta[150] is unsafe, however you can likely
    // read from it, but there is a chance of a segfault:
    printf("Value at 150: %d\n", manta[150]);
    // Allocate more memory:
    manta = realloc(manta, 200 * sizeof(*manta));
    // Check if the allocation was successful:
    if (manta == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    manta[150] = 100; // Now safe
    printf("Value at 150: %d\n", manta[150]);
    free(manta);
    manta = NULL; // Good practice
    printf("Memory deallocated.\n");
    return 0;
}