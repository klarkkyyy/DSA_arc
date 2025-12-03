#include "functions.h"

boolean isSubset(ComboList CL){
    boolean retVal = TRUE;
    int i;
    for(i = 0 ; i < CL.A->ctr && retVal == TRUE ; i++){
        int trav;
        for(trav = CL.B.elemPtr ; trav != -1 && CL.A->studs[i].ID != CL.B.VH->heap[trav].stud.ID ; trav = CL.B.VH->heap[trav].link){}
        if(trav == -1){
            retVal = FALSE;
        }
    }

    return retVal;
}




