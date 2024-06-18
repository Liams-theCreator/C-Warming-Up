#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char const *argv[])
{
    int length = 0;
    if (argc == 2)
    {
        while (argv[1][length] != '\0')
            length++;

        while (length >= 0)
        {
            ft_putchar(argv[1][length]);
            length--;
        }
    }
    ft_putchar('\n');
    return 0;
}
