#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i = 0, index = 0, j = 0;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                j = 0;
                index = argv[1][i] - 'a';
                while (j <= index)
                {
                    ft_putchar(argv[1][i]);
                    j++;
                }
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                j = 0;
                index = argv[1][i] - 'A';
                while (j <= index)
                {
                    ft_putchar(argv[1][i]);
                    j++;
                }
            }
            else
                ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return 0;
}