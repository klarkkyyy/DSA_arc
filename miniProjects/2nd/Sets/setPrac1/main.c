#include<stdio.h>
#include "functions.h"


int main(){
    Set A = {1, 2, 3, 4, 5};
    Set B = {4, 5, 6, 7, 8};
    int i;
    i = 0;
    
    displaySet(A, 'A');
    initSet(A);
    displaySet(A, 'A');
    displaySet(B, 'B');
    // Set C = UNION(B);
    
    
    return 0;
}