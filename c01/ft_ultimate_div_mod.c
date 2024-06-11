#include "main.h"

void ft_ultimate_div_mod(int *a, int *b)
{
    int div , divid;
    div = *a;
    divid = *b;

    *a =  div / divid;
    *b =  div % divid;
}