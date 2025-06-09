#include <stdio.h>
int main() {
    int manta[] = {28, 84, 18, 408, 18, 47};
    int l = sizeof(manta)/sizeof(*manta);
    for (int i = 0; i < l; i++) {
        printf("%d\n", manta[i]);
    }
    return 0;
}