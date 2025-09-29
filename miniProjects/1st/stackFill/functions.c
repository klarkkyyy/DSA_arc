#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include "header.h"

void initStack(Stack* s){
    s->top = -1;
}
bool push(Stack* s, int val){
    bool retVal = false;
    if(!isFull(s)){
        retVal = true;
        s->top++;
        s->arr[s->top] = val;
    }
    return retVal;
}
bool pop(Stack* s){
    bool retVal = false
    if(!isEmpty(s)){
        retVal = true;
        s->top--;
    }
    return retVal;
}
bool isFull(Stack s){
    return s.top == MAX - 1;
}
bool isEmpty(Stack s){
    return s.top == -1;
}
void display(Stack s){
    if(!isEmpty(s)){
        Stack temp = s;
        printf("Stack elements: ");
        for(; !isEmpty(temp) ; pop(&temp)){
            printf("%d ", peek(temp));
        }
        printf("\n");
    }
}
int peek(Stack s){
    if(!isEmpty){
        return s.arr[s.top];
    }
}





