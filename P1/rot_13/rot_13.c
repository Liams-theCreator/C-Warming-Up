#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char *argv[])
{
    int i = 0;
    char *arg = argv[1], newString;
    if (argc == 2)
    {
        while (arg[i] != '\0')
        {
            if ((arg[i] >= 'a' && arg[i] <= 'm') || (arg[i] >= 'A' && arg[i] <= 'M'))
            {
                newString = arg[i] + 13;
                ft_putchar(newString);
            }
            else if ((arg[i] >= 'n' && arg[i] <= 'z') || (arg[i] >= 'N' && arg[i] <= 'Z'))
            {
                newString = arg[i] - 13;
                ft_putchar(newString);
            }
            else
                ft_putchar(arg[i]);
            i++;
        }
    }
    ft_putchar('\n');
    return 0;
}