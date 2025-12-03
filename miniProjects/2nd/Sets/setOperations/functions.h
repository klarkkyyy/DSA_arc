#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>

#define MAX 10 

typedef char Set[MAX];

// Function declarations
void initialize(Set s);
void makeNull(Set s);
bool ismember(Set s, char elem);
void insert(Set s, char elem);
void deleteElem(Set s, char elem);
void assign(Set dest, Set src);
char min(Set s);
char max(Set s);
bool equal(Set a, Set b);
void unionSets(Set result, Set a, Set b);
void intersection(Set result, Set a, Set b);
void difference(Set result, Set a, Set b);
void symmetricDiff(Set result, Set a, Set b);
void merge(Set result, Set a, Set b);
char find(Set s, char elem);
void askInput(Set a, Set b);
void sortSet(Set s);
void printSet(Set s);

#endif
