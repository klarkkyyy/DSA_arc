#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 10
#define U_SIZE (SIZE - 1)

typedef struct node{
    int elem;
    struct node* next;
}cellType, *List;

typedef List Dictionary[SIZE];
typedef enum { TRUE, FALSE} boolean;

void initDictionary(Dictionary* D);
void displayDictionary(Dictionary D);
int hashFunc(int temp);
int insert(Dictionary* D, int elem);
void populateDictionary(Dictionary* D);
boolean isMember(Dictionary D, int elem);
boolean delete(Dictionary* D, int elem);

#endif