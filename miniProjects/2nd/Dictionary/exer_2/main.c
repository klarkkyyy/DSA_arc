/*
U = {0, 13, 45, 28, 20, 30, 33, 48, 108}







*/

#include<stdio.h>
#include "functions.h"



int main(){
      Dictionary myDict;

      initDictionary(&myDict);
      displayDictionary(myDict);
      printf("\n");
      populateDictionary(&myDict);
      displayDictionary(myDict);

      printf("\n");
      printf("Is 49 in the Dictionary?\n");
      isMember(myDict, 49) ? printf("YES\n") : printf("NAUR\n");

      printf("\n");
      printf("Was 48 deleted from the Dictionary?\n");
      delete(&myDict, 48) ? printf("YES\n") : printf("NAUR\n");
      displayDictionary(myDict);


}
/*
      To compile and run:
            - gcc main.c functions.c -o main
            - ./main

*/


















