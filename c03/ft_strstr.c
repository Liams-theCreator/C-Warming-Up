#include "main.h"

char *ft_strstr(char *str, char *to_find)
{
    int i = 0, j = 0;

    while(str[i] != '\0')
    {   
        j = 0;
        while(to_find[j] != '\0')
        {
            if(str[i + j] != to_find[j])
                break;
            j++;
        }
        if(to_find[j] == '\0')
            return &str[i];
        i++;
    }
    return NULL;
}