#include <stdio.h>
int main() {
    char input[200];
    FILE* f;
    f = fopen("input.txt", "r");
    if (f == NULL) {
        printf("Error opening file! Does the file exist?\n");
        return 1;
    }
    while(fgets(input, 200, f)){
        printf("%s", input);
    }
    printf("\n");
    fclose(f);
}