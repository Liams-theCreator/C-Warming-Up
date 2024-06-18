#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i = 0;
    char *string = argv[1];

    if (argc == 2)
    {
        while (string[i] != '\0')
        {
            if (string[i] >= 'a' && string[i] <= 'z')
            {
                string[i] = 'z' - string[i] + 'a';
                ft_putchar(string[i]);
            }
            else if (string[i] >= 'A' && string[i] <= 'Z')
            {
                string[i] = 'Z' - string[i] + 'A';
                ft_putchar(string[i]);
            }
            else
                ft_putchar(string[i]);
            i++;
        }
    }
    ft_putchar('\n');
    return 0;
}