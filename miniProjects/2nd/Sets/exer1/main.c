#include<stdio.h>
#include "functions.h"

int main(){
    SET A = {1, 0, 0, 1, 1, 0, 0, 1, 0, 1}, B = {1, 1, 0, 1, 0, 0, 1, 1, 0, 1};
    SET* C;
    C = Union(A,B);

    printSet(*C);

    free(C);

    return 0;
}