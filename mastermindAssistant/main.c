#include <stdio.h>
#include <stdbool.h>

// Instead of returning an array, which is bad practice,
// it's better to operate on an array as such instead.
void decode(int id, int* arr) { // Decode from integer to base 8 to represent pegs
    for (int i = 3; i >= 0; i--) {
        arr[i] = (id&7)+1; // id&7 is equivalent to mod 8, but faster
        id >>= 3; // Equivalent to /= 8, but faster
    }
}

void showguess(int pegs[]) {
    printf("Try guessing ");
    // Show the guess element by element
    for (int i = 0; i < 4; i++) {
        printf("%d ", pegs[i]);
    }
    printf("\n");
}

int encode(int* arr) { // Encode from array to integer using base 8
    int out = 0;
    for (int i = 0; i < 4; i++) {
        out <<= 3; // x8 but faster
        out += arr[i] - 1;
    }
    return out;
}

int min(int a, int b) { // Minimum of two integers
    if (a > b) {
        return b;
    }
    else {
        return a;
    }
}

int getinpuzz(int try, int guess) { // Get the amount of elements the guess shares with trial
    int g_arr[4];
    int try_arr[4];
    decode(try, try_arr); // Decode into array
    decode(guess, g_arr);
    int result = 0;
    int occurences_try[9]; // To count the amount of occurences of each number in try
    int occurences_guess[9]; // To count the amount of occurences of each number in guess
    // Clear array
    for (int i = 0; i < 9; i++) {
        occurences_try[i] = 0;
        occurences_guess[i] = 0;
    }
    for (int i = 0; i < 4; i++) { // Count occurences
        occurences_try[try_arr[i]] ++;
        occurences_guess[g_arr[i]] ++;
    }
    // Compare occurences and get the final result
    for (int i = 1; i < 9; i++) {
        result += min(occurences_try[i], occurences_guess[i]);
    }
    return result;
}

int getcorrect(int try, int guess) {
    int g_arr[4];
    int try_arr[4];
    decode(try, try_arr);
    decode(guess, g_arr);
    int result = 0;
    for (int i = 0; i < 4; i++) {
        if (try_arr[i] == g_arr[i]) {
            result ++;
        }
    }
    return result;
}

int main() {
    bool impossible[4096]; // Keeps track of which combinations are impossible
    int nextguess = 0; // Combination to guess
    int pegs[4];
    int possible = 4096;
    int guess;
    int right;
    int inpuzz;
    bool foundguess;
    int newguess = 0;

    // Clear impossible array
    for (int i = 0; i < 4096; i++) {
        impossible[i] = false;
    }
    
    while (possible > 1) {
        guess = newguess; // Set the current guess to the new one

        printf("%d possibilities\n", possible);
        decode(guess, pegs);
        showguess(pegs);
        
        printf("Enter the amount of correct and misplaced ones, separated by a space:\n");
        printf("Format: CORRECT MISPLACED (i.e., 4 2)\n");
        scanf("%d %d", &right, &inpuzz);
        inpuzz += right; // To get the amount of pegs actually in the puzzle
        // Eliminate all impossible combinations
        foundguess = false; 
        newguess = guess;
        for (int i = guess; i < 4096; i++) {
            if (!impossible[i]) {
                if ((getinpuzz(i, guess) != inpuzz) || (getcorrect(i, guess) != right)) { // If the solution is impossible
                    impossible[i] = true;
                    possible --;
                }
                else {
                    // A solution has been found
                    if (!foundguess) {
                        newguess = i; // Set guess to that solution
                    }
                    foundguess = true; // Make sure it's the first one
                }
            }
        }
    }
    if (possible == 1) {
        printf("You won!\n");
    }
    else {
        printf("Sorry, no solution found\n");
    }
    return 0;
    
}