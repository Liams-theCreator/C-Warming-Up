#include "main.h"

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0 ;
    unsigned int sourceLength = 0 ;

    while(*src != '\0')
    {
        sourceLength++;
        src++;
    }

    src -= sourceLength;
    if (size != 0)
    {
        while (i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return sourceLength;
}