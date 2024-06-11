#include "main.h"


int main(void)
{
    int nums[] = {1,4,2,5,6,3};
    int i;

    for(i = 0; i < 6 ;i++)
    {
        ft_putchar(nums[i] + 48);
    }
    ft_putchar('\n');
    ft_sort_int_tab(nums, 6);

    for(i = 0; i < 6 ;i++)
    {
        ft_putchar(nums[i] + 48);
    }
    return 0;
}