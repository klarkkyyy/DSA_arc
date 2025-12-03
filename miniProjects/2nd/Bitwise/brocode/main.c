#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printBinary(char num) {
    for (int i = 7; i >= 0; i--) {
        char bit = (num >> i) & 1;
        printf("%d", bit);
    }
} // 0

int main(){
    char x = 'A';  // 65 in ASCII
    char y = 'B';  // 66 in ASCII
    char z = 0;    // result

    z = x & y;
    printf("AND = ");
    printBinary(z);
    printf(" (decimal: %d, char: %c)\n", z, z);

    z = x | y;
    printf("OR = ");
    printBinary(z);
    printf(" (decimal: %d, char: %c)\n", z, z);

    z = x ^ y;
    printf("XOR = ");
    printBinary(z);
    printf(" (decimal: %d, char: %c)\n", z, z);

    z = x >> 1;
    printf("Right Shift = ");
    printBinary(z);
    printf(" (decimal: %d, char: %c)\n", z, z);

    z = y << 2;
    printf("Left shift = ");
    printBinary(z);
    printf(" (decimal: %d, char: %c)\n", z, z);
}