#include "ivector.h"

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
    int * temp = malloc(sizeof(int) * vector->capacity);

    for (size_t i = 0; i < vector->size; i++)
        temp[i] = vector->data[i];

    free(vector->data);
    vector->data = temp;
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

