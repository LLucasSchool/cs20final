#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
    FILE* f;
    f = fopen("output.txt", "w");
    long primes[1000000];
    primes[0] = 2;
    primes[1] = 3;
    primes[2] = 5;
    primes[3] = 7;
    long found = 3; // 3 Primes have been found
    long current = 9; // Number to search for
    double sq; // Square root of current number
    long index; // For prime array searching
    bool prime;
    fprintf(f, "2\n3\n5\n7\n"); // Put the first few primes in to the file
    while (found < 1000000) { // Repeat until 1 Million primes have been found
        sq = sqrt(current); // sqrt comes in the math.h header
        index = 0;
        prime = true; // Assume prime by default
        while (primes[index] < sq) {
            index ++;
            if (!(current%primes[index])) { // If primes[index] is a factor of current... 
                prime = false; // Then the number is composite
                break;
            }
        }
        if (prime) {
            primes[found++] = current; // Add the prime to the prime array
            fprintf(f,"%li\n", current); // Put the prime into the file
            if (!(found%10000)) {
                printf("%li%%\n",found/10000); // Show progress every 10,000
            }
        }
        current += 2;
    }
    fclose(f);
    printf("Done!\n");
}