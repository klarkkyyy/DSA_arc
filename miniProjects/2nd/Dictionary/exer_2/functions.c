#include "functions.h"

void initDictionary(Dictionary* D){
    int i;
    for(i = 0 ; i < SIZE ; i++){
        (*D)[i] = NULL;
    }
}

void displayDictionary(Dictionary D){
    int i;
    for(i = 0 ; i < SIZE ; i++){
        if(D[i] == NULL){
            printf("Group %d: Empty\n", i);
        } else {
            List temp = D[i];
            printf("Group %d:", i);
            while(temp != NULL){
                printf(" %d ", temp->elem);
                temp = temp->next;
            }
            printf("\n");
        }
    }
}
int hashFunc(int temp){
    return temp % 10;
}
int insert(Dictionary* D, int elem){
    List temp = (List)malloc(sizeof(cellType));
    temp->elem = elem;
    temp->next = NULL;

    int groupNum = hashFunc(elem);    
    //if group is empty
    List* trav;
    for(trav = &((*D)[groupNum]) ; *trav != NULL ; trav = &(*trav)->next){}
    *trav = temp;
}


void populateDictionary(Dictionary* D){
    int U[U_SIZE] = {0, 13, 45, 28, 20, 30, 33, 48, 108};
    int i;
    
    for(i = 0 ; i < U_SIZE ; i++){
        insert(D, U[i]);
    }
}

boolean isMember(Dictionary D, int elem){
    boolean retVal= 0;
    int i;
    int groupNum = hashFunc(elem);

    if(hashFunc(elem) < SIZE){
        List* trav;
        for(trav = &D[groupNum] ; *trav != NULL && (*trav)->elem != elem ; trav = &(*trav)->next){}
        if(*trav != NULL){
            retVal = 1;

        }
    }

    return retVal;
}

boolean delete(Dictionary* D, int elem){
    boolean retVal= 0;
    int i;
    int groupNum = hashFunc(elem);

    if(isMember(*D, elem)){
        List* trav;
        for(trav = &((*D)[groupNum]) ; *trav != NULL && (*trav)->elem != elem ; trav = &(*trav)->next){}
        if(*trav != NULL){
            retVal = 1;
            List temp = *trav;
            *trav = temp->next;
            free(temp);
            
        }
    }

    return retVal;
}

