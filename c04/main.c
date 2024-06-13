#include "main.h"

#include <stdlib.h> 
#include <stdio.h>

int main() {
    printf("%d\n", ft_atoi("   "));                // Expected: 0
    printf("%d\n", ft_atoi("   +123"));            // Expected: 123
    printf("%d\n", ft_atoi("   -123"));            // Expected: -123
    printf("%d\n", ft_atoi("   ++123"));           // Expected: 123
    printf("%d\n", ft_atoi("   --123"));           // Expected: 123
    printf("%d\n", ft_atoi("   -+123"));           // Expected: -123
    printf("%d\n", ft_atoi("   +-123"));           // Expected: -123
    printf("%d\n", ft_atoi("123abc"));             // Expected: 123
    printf("%d\n", ft_atoi("   -123abc456"));      // Expected: -123
    return 0;
}