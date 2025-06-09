#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* f;
    f = fopen("data.txt", "r"); // Open data file
    if (f == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    char input[30000]; // Input char - 30k size
    fgets(input, 30000, f); // Read first 30k chars - more than enough
    char *ch; // pointer for the input array
    ch = strtok(input, " "); // Find the position of the first token
    long sum = 0;
    int count = 0;
    while (ch != NULL) {
        if (ch[0] == '1') {
            sum ++; // If I find a 1, then add 1 to the sum
        }
        count ++; // Always add 1 to the count
        ch = strtok(NULL, " "); // Move to the next token after the pointer
        // Until there are no more tokens...
    }
    // Convert both values to doubles to get decimal average
    double sumd = sum;
    double countd = count;
    // Display said average
    printf("Average: %lf\n", sumd/countd);
    return 0;
}