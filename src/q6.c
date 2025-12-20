// Write a C program to find the length of a string without using the built-in string functions.
#include <stdio.h>

int main() {
    
    char str[] = "Hello, World!";
    int length = 0;

    // Calculating the length of the string
    while (str[length] != '\0') {
        length++;
    }

    printf("The length of the string \"%s\" is: %d\n", str, length);

    return 0;
}