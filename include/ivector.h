#ifndef IVECTOR_H_
#define IVECTOR_H_

#include <stdlib.h>

typedef struct iVector 
{
    size_t size;
    size_t capacity;
    int * data;
} iVector;

iVector iVectorInit()
{
    iVector buffer;

    buffer.size = 0;
    buffer.capacity = 2;
    buffer.data = malloc(sizeof(int) * buffer.capacity);

    return buffer;
}

void iVectorReserve(iVector * vector, int size)
{
    vector->capacity += size;
    vector->data = realloc(vector->data, sizeof(int) * vector->capacity);
}

void iVectorPushback(iVector * vector, int data)
{
    if (vector->size == vector->capacity)
    {
        iVectorReserve(vector, 2);
        vector->data[vector->size] = data;
        vector->size++;
    }
    else
    {
        vector->data[vector->size] = data;
        vector->size++;
    }
}

void iVectorFree(iVector * vector)
{
    free(vector->data);
}

#endif // IVECTOR_H_
