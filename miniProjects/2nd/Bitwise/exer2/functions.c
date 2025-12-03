#include "functions.h"


void initSet(SET* A){
    *A = 0;
}
void displaySet(SET A){
    printf("\n");
    for(int i = (sizeof(A) * 8) - 1 ; i >= 0 ; i--){
        printf("%d", (A >> i) & 1);
    }
    printf("\n");
}
void insert(SET* A, SET B){
    *A |= (1 << B);
}
bool member(SET A, SET B){ 
    return (A & (1 << B)) != 0;
}
void deleteSet(SET* A, SET B){
    *A &= ~(1 << B);
}
SET unionSet(SET A, SET B){
    return A | B;
}
SET intersection(SET A, SET B){
    return A & B;
}
bool isSubset(SET A, SET B){
    return (A & B) == A;
}
SET difference(SET A, SET B){
    return A & ~(B);
}


