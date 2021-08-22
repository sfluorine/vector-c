#ifndef IVECTOR_H_
#define IVECTOR_H_

#include <stdlib.h>

typedef struct iVector 
{
    size_t size;
    size_t capacity;
    int * data;
} iVector;

iVector iVectorInit();
void iVectorReserve(iVector * vector, int size);
void iVectorPushback(iVector * vector, int data);
void iVectorFree(iVector * vector);

#endif // IVECTOR_H_
