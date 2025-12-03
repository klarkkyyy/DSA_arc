#include<stdio.h>
#include<stdlib.h>
#include"encode.h"

// Write your functions here...
int* encodeString(char string[]){
    int noOfCharacters = strlen(string);
    int* binary = (int*)malloc(noOfCharacters * 8 * sizeof(int) + 1);
    
    int character, bit, i = 0;
    for(character = 0 ; character < noOfCharacters ; character++){
        for(bit = (sizeof(char)*8) - 1 ; bit >= 0 ; bit--){
            binary[i++] = (string[character] >> bit) & 1;
        }
    }
    binary[i++] = -1;
    return binary;
}

short int* arrayToBitmask(int arr[]){
    // 0, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 1, 1, 1, -1
    int count = 0, i = 0, j = 0, nums[200] = {0};

    for(i = 0; arr[i] != -1 ;){
        int num = 0;
        for(j = 0 ; j < 16 && arr[i] != -1 ; j++){
            num = (num << 1) | arr[i];
            i++;
        }
        nums[count++] = num;
    }
    nums[count++] = -1;

    short int* retArr = (short int*)malloc(sizeof(short int) * count);

    j = 0;
    for(i = 0 ; i < count ; i++){
        retArr[j++] = nums[i];
    }

    return retArr;
}

void displayBitPattern(int arr[]){
    int i = 0, counter = 1;
    for(i = 0 ; arr[i] != -1 ; i++){
        printf("%d", arr[i]);
        if(counter == 8){
            printf(" ");
            counter = 0;
        }
        counter++;
    }
}



