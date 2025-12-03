#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int* encodeString(char string[]){
    int noOfCharacters = strlen(string);
    int* binary = (int*)malloc((noOfCharacters * 8 + 1)* sizeof(int));
    
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

int main(){
    char str[] = "EARRINGS";

    printf("String = ""%s""\n", str);
    int* binaryRep = encodeString(str);
    printf("binaryRep: ");
    for(int i = 0 ; binaryRep[i] != -1 ; i++){
        printf("%d", binaryRep[i]);
    }
    printf("\n\n");

    short int* decimal = arrayToBitmask(binaryRep);
    printf("arrayToBitmask: ");
    for(int i = 0 ; decimal[i] != -1 ; i++){
        printf("%d", decimal[i]);
    }

    free(binaryRep);
    free(decimal);
}

// int binaryToDecimal(int* binary, int length){
//     int decimal = 0;
//     int power = 1;
//     for(int i = length - 1 ; i >= 0 ; i--){
//         if(binary[i] == 1){
//             decimal += power;
//         }
//         power *= 2;
//     }
//     return decimal;
// }