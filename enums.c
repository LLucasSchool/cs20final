#include <stdio.h>
enum cities {
    CALGARY,
    NEW_YORK,
    VANCOUVER,
    PARIS
};

int main() {
    enum cities city = CALGARY; // define the enum
    printf("%d\n", city); // check value
    city = PARIS; // set the enum to a new value
    printf("%d\n", city);
    return 0;
}