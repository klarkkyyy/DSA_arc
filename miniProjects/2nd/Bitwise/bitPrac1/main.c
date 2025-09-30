#include<stdio.h>
#include "functions.h"

int main(){
    char sample;

    printf("Enter a character: ");
    scanf(" %c", &sample);
    displayBits(sample);
}