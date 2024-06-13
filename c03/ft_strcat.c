#include "main.h"

char *ft_strcat(char *dest, char *src)
{
    if(dest == NULL || src == NULL)
        return NULL;
    
    int i = 0;
    size_t size = ft_strlen(dest);

    while(src[i] != '\0')
    {
        dest[size + i] = src[i];
        i++;
    }
    dest[size + i] = '\0';
    return dest;
}