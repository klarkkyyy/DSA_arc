/*

=========================================================================================================================
Given the data type definition of a set implemented using computer word char:
    typedef unsigned char SET;

Write the code of the function of the following operations:
1. initSet()        5. delete()
2. displaySet()     6. union()
3. insert()         7. intersection()
4. member()         8. difference()
=========================================================================================================================

*/
#include<stdio.h>
#include "functions.h"

int main(){
    SET mySet;
    SET B;
    initSet(&mySet);
    B = 8;
    displaySet(mySet);
    insert(&mySet, 4);

    displaySet(mySet);
    insert(&mySet, 7);

    displaySet(mySet);
    insert(&mySet, 4);
    insert(&mySet, 5);
    insert(&mySet, 6);
    insert(&mySet, 2);
    deleteSet(&mySet, 6);
    deleteSet(&mySet, 5);
    deleteSet(&mySet, 5);
    printf("\nIs 5 in mySet?\n");
    if(member(mySet, 5)){
        printf("YES!\n");
    } else {
        printf("NU:(\n");
    }

    printf("\nUnion:\n");
    displaySet(mySet);
    displaySet(B);
    SET C = unionSet(mySet, B);

    displaySet(C);

    printf("\nIntersection:\n");
    
    SET D = intersection(C, 63);
    displaySet(63);
    displaySet(D);

    printf("\nDifference:\n");
    
    SET E = difference(C, 4);
    displaySet(C);
    displaySet(4);
    printf("\n");
    displaySet(E);

    printf("\nIs mySet a subset of E (Difference)?\n");
    if(isSubset(mySet, E)){
        printf("YES!\n");
    } else {
        printf("NU:(\n");
    }

    return 0;
}



















