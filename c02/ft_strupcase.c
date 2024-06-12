#include "main.h"

char *ft_strupcase(char *str)
{
    if(str == NULL)
        return NULL;
    char *new;
    new = str;
    while(*str != '\0')
    {
        if(*str >= 97 && *str <= 122)
            *str = *str - 32;
        str++;
    }
    return new;
}