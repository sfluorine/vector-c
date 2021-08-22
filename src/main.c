#include <stdio.h>
#include "ivector.h"

int main() 
{
    iVector myVector = iVectorInit();

    iVectorReserve(&myVector, 20);

    iVectorPushback(&myVector, 20);
    iVectorPushback(&myVector, 30);
    iVectorPushback(&myVector, 40);
    iVectorPushback(&myVector, 20);
    iVectorPushback(&myVector, 20);
    iVectorPushback(&myVector, 20);
    iVectorPushback(&myVector, 20);
    iVectorPushback(&myVector, 20);
    iVectorPushback(&myVector, 20);
    iVectorPushback(&myVector, 30);
    iVectorPushback(&myVector, 30);
    iVectorPushback(&myVector, 30);
    iVectorPushback(&myVector, 30);
    iVectorPushback(&myVector, 30);
    iVectorPushback(&myVector, 30);
    iVectorPushback(&myVector, 50);
    iVectorPushback(&myVector, 20);
    iVectorPushback(&myVector, 20);

    for (size_t i = 0; i < myVector.size; i++)
        printf("%d \n", myVector.data[i]);

    iVectorFree(&myVector);

}
