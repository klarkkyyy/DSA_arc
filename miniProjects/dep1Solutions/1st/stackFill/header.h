#include<stdio.h>
#include "functions.c"

#define MAX 3
#define STACKS 3

typedef struct{
    int arr[MAX];
    int top;
}Stack;

void initStack(Stack* s);
bool push(Stack* s, int val);
bool pop(Stack* s);
bool isFull(Stack s);
bool isEmpty(Stack s);
void display(Stack s);
int peek(Stack s);










