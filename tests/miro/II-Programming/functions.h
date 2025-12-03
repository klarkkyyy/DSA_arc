#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

#define MAX 0xA
#define VH_MAX 0XFF

typedef struct {
    char FN[24], LN[16], MI;
}nametype;

typedef struct {
    unsigned int ID;
    nametype name;
    char course[8];
    int yrLevel;
}studRec;

typedef struct cell {
    studRec studs[MAX];
    int ctr;
}*ArrayList;

typedef struct {
    studRec stud;
    int link;
}CBnode;

typedef struct {
    CBnode heap[VH_MAX];
    int avail;
}*Vheap;

typedef struct {
    int elemPtr;
    Vheap VH;
}cursorList;

typedef struct {
    ArrayList A;
    cursorList B;
}ComboList;

typedef enum {
    FALSE, TRUE
} boolean;

void initArrayList(ArrayList *A);
void initVHeap(Vheap *VH);
void initCursorList(cursorList *CL, Vheap VH);
int allocSpace(Vheap VH);
void insertCursorList(cursorList *CL, studRec s);
void populateArrayList(ArrayList A);
void populateCursorList(cursorList *CL, boolean makeSuperset);
boolean isSubset(ComboList CL);

#endif