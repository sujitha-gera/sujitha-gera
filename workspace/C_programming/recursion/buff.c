#include <stdio.h>

int vowelcount(char *str, int i) {
    // Base case: if the current character is the null terminator
    if (str[i] == '\0') {
        return 0;
    }

    char c = str[i];
    int isvowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
                   c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    return isvowel + vowelcount(str, i + 1);
}

int main() {
    char str[20]; // Allocate memory for the string
    printf("Enter string: ");
    scanf("%19s", str); // Use %19s to avoid buffer overflow

    int count = vowelcount(str, 0);
    printf("Number of vowels: %d\n", count);

    return 0; // Return 0 to indicate successful execution
}

