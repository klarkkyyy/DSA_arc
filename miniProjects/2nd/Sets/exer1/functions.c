#include "functions.h"

void initSet(SET temp) {
    for (int i = 0; i < MAX; i++) {
        temp[i] = -1;  // mark as empty
    }
}

bool isMember(SET temp, int elem) {
    for (int i = 0; i < MAX; i++) {
        if (temp[i] == elem)
            return true;
    }
    return false;
}

SET* Union(SET A, SET B) {
    SET* C;
    C = (SET*)malloc(sizeof(SET));
    if(!C){
        printf("Memory allocation failed.\n");
        exit(1);
    }

    // Copy all valid elements from A
    for (int i = 0; i < MAX; i++) {
        (*C)[i] = A[i] || B[i];
    }

    return C;
}

void printSet(SET S){
    int i = 0;
    while(i < MAX){
        printf("%d ", S[i]);
        i++;
    }
}