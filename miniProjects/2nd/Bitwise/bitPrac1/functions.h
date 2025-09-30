#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define MAX 8

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void displayBits(char sample);

void displayBits(char sample){
    for(int i = MAX - 1 ; i >= 0 ; --i){
        if(sample & (1 << i)){
            printf("1");
        } else {
            printf("0");
        }
    }
}

#endif