#include "functions.h"

// Initialize the ArrayList
void initArrayList(ArrayList *A) {
    *A = (ArrayList)malloc(sizeof(struct cell));
    (*A)->ctr = 0;
}

// Initialize the virtual heap
void initVHeap(Vheap *VH) {
    *VH = (Vheap)malloc(sizeof(struct { CBnode heap[VH_MAX]; int avail; }));
    int i;
    for (i = 0; i < VH_MAX - 1; i++) {
        (*VH)->heap[i].link = i + 1;
    }
    (*VH)->heap[VH_MAX - 1].link = -1;
    (*VH)->avail = 0;
}

// Initialize cursor list
void initCursorList(cursorList *CL, Vheap VH) {
    CL->VH = VH;
    CL->elemPtr = -1;
}

// Allocate a node in virtual heap
int allocSpace(Vheap VH) {
    int temp = VH->avail;
    if (temp != -1) {
        VH->avail = VH->heap[temp].link;
    }
    return temp;
}

// Insert student into cursor list
void insertCursorList(cursorList *CL, studRec s) {
    int newNode = allocSpace(CL->VH);
    if (newNode != -1) {
        CL->VH->heap[newNode].stud = s;
        CL->VH->heap[newNode].link = CL->elemPtr;
        CL->elemPtr = newNode;
    }
}

// Populate ArrayList
void populateArrayList(ArrayList A) {
    studRec sample[] = {
        {1001, {"John", "Doe", 'A'}, "BSCS", 1},
        {1002, {"Jane", "Smith", 'B'}, "BSIT", 2},
        {1003, {"Mark", "Cruz", 'C'}, "BSCS", 3}
    };

    int n = sizeof(sample) / sizeof(sample[0]);
    for (int i = 0; i < n; i++) {
        A->studs[A->ctr++] = sample[i];
    }
}

// Populate cursor list (subset or superset)
void populateCursorList(cursorList *CL, boolean makeSuperset) {
    studRec sampleSuperset[] = {
        {1001, {"John", "Doe", 'A'}, "BSCS", 1},
        {1003, {"Mark", "Cruz", 'C'}, "BSCS", 3},
        {1004, {"Anna", "Reyes", 'D'}, "BSIS", 4}
    };

    int n = makeSuperset ? 4 : 2; // smaller if not superset
    for (int i = 0; i < n; i++) {
        insertCursorList(CL, sampleSuperset[i]);
    }
}
