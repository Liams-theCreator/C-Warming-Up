#include "main.h"

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0;

    if(s1 == NULL || s2 == NULL)
        return -1;
    
    while(i < n)
    {
        if (s1[i] != s2[i])
        {
            return -1;
        }
        i++;
    }
    return 0;
}