#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef int Set[MAX];

void initSet(Set S){
    int i;
    for(i = 0 ; i < MAX; i++){
        S[i] = '0';
    }
}
void displaySet(Set S, char setName){
    printf("Set %c: { ", setName);
    for(int i = 0; S[i] != 0 ; i++){
        printf("%d ", S[i]);
    }
    printf("}");
    printf("\n");
}

Set* UNION(Set A){
    Set* C = (Set*)malloc(sizeof(Set));
    displaySet(A, 'B');

}
#endif

