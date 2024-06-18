char *ft_strpbrk(const char *s1, const char *s2)
{
    if (s1 == NULL || s2 == NULL)
        return NULL;

    const char *temp2 = s2;

    while (*s1 != '\0')
    {
        temp2 = s2;
        while (*temp2 != '\0')
        {
            if (*s1 == *temp2)
                return (char *)s1;
            temp2++;
        }
        s1++;
    }
    return NULL;
}
