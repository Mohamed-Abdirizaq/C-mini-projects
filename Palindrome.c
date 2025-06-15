#include <stdio.h>
#include <string.h>
//Function Definition
const char* is_palindrome_recursive(char *str, int start, int end) {
    if (start >= end) {
        return "Palindrome";
    }
    if (str[start] != str[end]) {
        return "not Palindrome";
    } else {
        return is_palindrome_recursive(str, start + 1, end - 1);
    }
}

int main() {
    char str[101];
//Prompts the user
    printf("Enter a string (1-100 characters): ");
//Reads user input
    scanf("%100s", str);

    int len = strlen(str);
    printf("The string you entered is %s\n", is_palindrome_recursive(str, 0, len - 1));
//Stops the program
    return 0;
}
