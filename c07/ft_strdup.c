#include "main.h"

char *ft_strdup(char *src)
{
    int i = 0;
    int size = 0;
    char *newstring;
    
    if(src == NULL)
        return NULL;
    else{
        while(src[size] != '\0')
        size++;
    }

    newstring = malloc(sizeof(char) * (size + 1));
    if(newstring == NULL)
        return NULL;
    
    while(src[i] != '\0')
    {
        newstring[i] = src[i];
        i++;
    }
    newstring[i] = '\0';

    return newstring;
}