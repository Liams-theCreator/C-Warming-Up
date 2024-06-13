#include "main.h"

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    if(dest == NULL || src == NULL)
        return NULL;
    
    unsigned int i = 0;
    size_t size = ft_strlen(dest);

    if (nb != 0)
    {
        while(i < nb)
        {
            dest[size + i] = src[i];
            i++;
        }
    }

    dest[size + i] = '\0';
    return dest;
}