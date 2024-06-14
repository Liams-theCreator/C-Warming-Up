#include "main.h"

int ft_iterative_power(int nb, int power)
{
    int i = 1 , result = nb;

    if((power == 0 && nb == 0) || power == 0)
        return 1;
        
    if(power < 0)
        return 0;

    while(i < power)
    {
        result *= nb;
        i++;
    }

    return result;
}