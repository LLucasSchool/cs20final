#include <stdio.h>
#include <string.h>

struct student { // Define the struct
    unsigned long long id;
    short birthyear;
    char name[16];
    double average;
};

int main() {
    struct student student1;
    student1.id = 5862345;
    student1.birthyear = 2014;
    student1.average = 89.31;
    char name[] = "Jeff";
    strcpy(student1.name, name);
    printf("Student %llu\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Year of birth: %hi\n", student1.birthyear);
    printf("Average grade: %lf%%\n", student1.average);

    struct student student2 = {5864791, 2015, "John", 90.12};
    printf("Student 1 Name: %s\n", student1.name);
    printf("Student 2 Name: %s\n", student2.name);

    return 0;
}