#include "main.h"

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        ft_putchar('\n');
        return -1;
    }

    int num1, num2, result = 0;
    char *first = argv[1], *op = argv[2], *second = argv[3];

    num1 = ft_atoi(first);
    num2 = ft_atoi(second);
    while (op[0])
    {
        if (*op == '-')
            result = num1 - num2;
        else if (*op == '+')
            result = num1 + num2;
        else if (*op == '*')
            result = num1 * num2;
        else if (*op == '/')
            result = num1 / num2;
        else if (*op == '%')
            result = num1 % num2;
        break;
    }
    printf("%d\n", result);
}