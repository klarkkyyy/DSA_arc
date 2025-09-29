#include<stdio.h>
/*===================================================================================================================================================

Instructions: Be able to push and pop elements from a stack. Once the stack is full, it'd proceed to the other stack to push the elements.
Once the stack is empty, it'd proceed to the other stack to pop the elements.

===================================================================================================================================================*/
#include<stdbool.h>
#include<stdlib.h>

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


int main(){
    Stack s[STACKS];

    for(int i=0;i<STACKS;i++){
        initStack(&s[i]);
    }

    push(&s[0], 10);
    push(&s[0], 80);
    push(&s[0], 4);

    display(s[0]);
}


void initStack(Stack* s){
    s->top = -1;
}
bool push(Stack* s, int val){
    bool retVal = false;
    
        retVal = true;
        s->top++;
        s->arr[s->top] = val;
    
    return retVal;
}
bool pop(Stack* s){
    bool retVal = false;
    
    if(!isEmpty(*s)){
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
    if(!isEmpty(s)){
        return s.arr[s.top];
    }
}





