#include <stdio.h>
int main() {
    FILE* f;
    f = fopen("output.txt", "w");
    fprintf(f, "Help, I'm trapped in a text file!\n");
    fclose(f);
    return 0;
}