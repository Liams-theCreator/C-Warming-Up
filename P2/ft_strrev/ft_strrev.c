char *ft_strrev(char *str)
{
    if (str == NULL)
        return NULL;

    int length = 0;
    while (str[length] != '\0')
        length++;

    int start = 0, end = length - 1;
    char temp;

    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}
