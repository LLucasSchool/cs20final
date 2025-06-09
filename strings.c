#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "Hello";
    char str2[] = "Tomato Soup";
    char str3[] = "I like turtles";
    char str4[] = "asdf";
    char str5[] = "I like turtles";

    printf("First character of str1: %c\n", str1[0]);

    strcat(str1, str2);
    printf("strcat....\n");
    printf("Str1: %s\n", str1);
    printf("Str2: %s\n", str2);

    printf("Length of str1: %zu\n", strlen(str1));

    strcpy(str1, str4);
    printf("strcpy...\n");
    printf("str1: %s\n",str1);
    printf("str4: %s\n",str4);

    printf("Compare str3 with str4: %d\n", strcmp(str3, str4));
    printf("Compare str3 with str5: %d\n", strcmp(str3, str5));
    return 0;
}