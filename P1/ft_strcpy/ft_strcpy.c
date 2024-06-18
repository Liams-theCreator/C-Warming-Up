char *ft_strcpy(char *s1, char *s2)
{
    if (s2 == NULL)
        return NULL;

    while (*s2 != '\0')
    {
        *s1 = *s2;
        s2++;
        s1++;
    }
    *s1 = '\0';
    return s1;
}
