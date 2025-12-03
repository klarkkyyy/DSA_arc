#include "functions.h"

void displayBit(int elem){
    // 24
    for(int i = (sizeof(elem) * 8) - 1 ; i >= 0 ; i--){
        printf("%d", (elem >> i) & 1);
    }
}
/*
128 64 32 16 8 4 2 1
1   0  0   0 0 0 0 1
*/

