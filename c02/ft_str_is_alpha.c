#include "main.h"

int ft_str_is_alpha(char *str)
{
    if (str == NULL)
        return 1;
    
    while(*str != '\0')
    {
        if ((*str < 'a' || *str > 'z') && (*str < 'A' || *str > 'Z'))
        {
            return 0;
        }
        
        str++;
    }
    return 1;
}