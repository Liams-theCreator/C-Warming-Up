#include "main.h"

int *ft_range(int min, int max)
{
    if( min >= max )
        return NULL;

    int idx = 0, size = max - min;
    int *newArray = malloc(sizeof(int) * size);
    if(newArray == NULL)
        return NULL;
    
    while(min < max)
    {
        newArray[idx] = min;
        min++;
        idx++;
    }
    return newArray;
}
