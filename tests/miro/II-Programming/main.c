/*

*/

#include<stdio.h>
#include "functions.h"

int main() {
    ComboList CL;

    // Initialize components
    initArrayList(&CL.A);

    Vheap VH;
    initVHeap(&VH);
    initCursorList(&CL.B, VH);

    // Populate both
    populateArrayList(CL.A);
    populateCursorList(&CL.B, TRUE);   // you can set TRUE or FALSE for testing

    // Just check and print TRUE/FALSE
    boolean result = isSubset(CL);

    printf("is A a subset of B? %s\n", result == TRUE ? "TRUE" : "FALSE");

    return 0;
}
/*
      To compile and run:
            - gcc main.c functions.c -o main
            - ./main

*/


















