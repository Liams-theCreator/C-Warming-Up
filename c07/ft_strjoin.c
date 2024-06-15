#include "main.h"

char *ft_strjoin(int size, char **strs, char *sep)
{
    int i = 0, j = 0, k = 0, totalsize = 0, sepsize = 0, idx = 0;

    while(i < size)
    {
        j = 0;
        while(strs[i][j] != '\0')
        {
            totalsize++;
            j++;
        }
        i++;
    }
    while(sep[sepsize] != '\0')
        sepsize++;

    totalsize += sepsize * (size - 1); 

    char *newString = malloc(sizeof(char) * (totalsize + 1)) ;
    if(newString == NULL)
        return NULL;
    
    if(size == 0)
    {
        newString[0] = '\0';
        return newString;
    }

    i = 0;
    j = 0;

    while(i < size)
    {
        j = 0;
        while(strs[i][j] != '\0')
        {
            newString[idx] = strs[i][j];
            idx++;
            j++;
        }
        if(i < size - 1)
        {
            k = 0;
            while(sep[k] != '\0')
            {
                newString[idx] = sep[k];
                idx++;
                k++;
            }
        }
        i++;
    }
    newString[idx] = '\0';
    return newString;
}