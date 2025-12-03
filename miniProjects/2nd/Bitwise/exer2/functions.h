#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

#define MAX 10
#define SHORT 16
#define MID 24
#define LONG 32

typedef unsigned char SET; // 1 byte = 8 bits or 00000000 (8 zero's)

void initSet(SET* A);
void displaySet(SET A);
void insert(SET* A, SET B);
bool member(SET A, SET B);
void deleteSet(SET* A, SET B);
SET unionSet(SET A, SET B);
SET intersection(SET A, SET B);
bool isSubset(SET A, SET B);
SET difference(SET A, SET B);


#endif