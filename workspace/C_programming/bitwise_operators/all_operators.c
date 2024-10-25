//Example code for all operators

#include <stdio.h>
int main() {
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary

    printf("a & b = %d\n", a & b); // Bitwise AND
    printf("a | b = %d\n", a | b); // Bitwise OR
    printf("a ^ b = %d\n", a ^ b); // Bitwise XOR
    printf("~a = %d\n", ~a);       // Bitwise NOT
    printf("a << 1 = %d\n", a << 1); // Left Shift
    printf("a >> 1 = %d\n", a >> 1); // Right Shift
    return 0;
}
