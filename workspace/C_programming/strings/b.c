#include <stdio.h>
#include <string.h>

void reverse(char a[], int i, int j);
void reverse_word(char a[], int start, int end);

void reverse_word(char a[], int start, int end) {
    int i, j;
    for (i = start, j = start; j <= end; j++) {
        if (a[j] == ' ') {
            continue;
        }
        i = j; // Start of the word
        while (a[j] != ' ' && j <= end) {
            j++;
        }
        j--; // Adjust to the last character of the word
        reverse(a, i, j);
    }
}

void reverse(char a[], int i, int j) {
    char temp;
    while (i < j) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main() { // Change void to int
    char a[] = "hello world hi";
    reverse_word(a, 0, strlen(a) - 1);
    printf("%s\n", a);
    return 0; // Add return statement
}

