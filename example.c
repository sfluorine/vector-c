#include <stdio.h>
#include "include/ivector.h"


int main()
{
    iVector myVector = iVectorInit();

    for (int i = 0; i < 10; i++)
        iVectorPushback(&myVector, i);

    for (int i = 0; i < myVector.size; i++)
        printf("%d \n", myVector.data[i]);

    iVectorFree(&myVector);
}
