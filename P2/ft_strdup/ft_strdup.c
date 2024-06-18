#include <stdlib.h>

int ft_strlen(char *str)
{
    int length = 0;

    while (str[length] != '\0')
        length++;
    return length;
}

char *ft_strdup(char *src)
{
    if (src == NULL)
        return NULL;

    int length = ft_strlen(src), i = 0;
    char *newString = malloc(sizeof(char) * length + 1);
    if (newString == NULL)
        return NULL;
    while (src[i] != '\0')
    {
        newString[i] = src[i];
        i++;
    }
    newString[i] = '\0';
    return newString;
}