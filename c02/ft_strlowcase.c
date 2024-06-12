#include "main.h"

char *ft_strlowcase(char *str)
{
    if(str == NULL)
        return NULL;
    char *newstring = str;
    while(*str != '\0')
    {
        if(*str >= 65 && *str <= 97)
            *str += 32;
        str++;
    }
    return newstring;
}
