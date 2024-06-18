#include <unistd.h>

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
    int i = 0;

    if (argc == 4)
    {
        char *string = argv[1], *first = argv[2], *second = argv[3];
        int length = ft_strlen(first);
        if (length == 1)
        {
            while (string[i] != '\0')
            {
                if (string[i] == first[0])
                {
                    string[i] = second[0];
                }
                ft_putchar(string[i]);
                i++;
            }
        }
    }
    ft_putchar('\n');
    return 0;
}