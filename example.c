#include <stdio.h>
#include "include/svector.h"
#include "include/ivector.h"

int main()
{
    iVector intVect = iVectorInit();
    iVectorPushback(&intVect, 10);
    iVectorPushback(&intVect, 20);

    for (size_t i = 0; i < intVect.size; i++)
        printf("%d \n", intVect.data[i]);

    iVectorFree(&intVect);

    sVector stringVect = sVectorInit();
    sVectorPushback(&stringVect, "Hello ");
    sVectorPushback(&stringVect, "world!");

    for (size_t i = 0; i < stringVect.size; i++)
        printf("%s", stringVect.data[i]);

    printf("\n");
    sVectorFree(&stringVect);
}
