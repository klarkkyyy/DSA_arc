#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define MAX 10

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

typedef int SET[MAX];

SET* Union(SET A, SET B);
void initSet(SET temp);
bool isMember(SET temp, int elem);
void printSet(SET S);

#endif
