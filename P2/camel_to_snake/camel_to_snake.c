#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int length = 0;

    while (str[length] != '\0')
        length++;
    return length;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return -1;
    }
    int seperator = 0, i = 0, k = 0, idx = 0;
    char *string = argv[1];
    int length = ft_strlen(string);

    while (string[k] != '\0')
    {
        if (string[k] >= 'A' && string[k] <= 'Z')
            seperator++;
        k++;
    }

    char *snake = malloc(sizeof(char) * (length + seperator + 1));
    if (snake == NULL)
        return -1;

    while (string[i] != '\0')
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            snake[idx++] = '_';
            snake[idx++] = string[i] + 32;
        }
        else
        {
            snake[idx++] = string[i];
        }
        i++;
    }
    snake[idx] = '\0';

    idx = 0;
    while (snake[idx] != '\0')
    {
        ft_putchar(snake[idx]);
        idx++;
    }

    ft_putchar('\n');
    free(snake);
    return 0;
}