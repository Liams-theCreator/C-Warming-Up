#include "main.h"

int main() {
    char haystack[] = "Hello, world! sqdqsdqsd";
    char needle[] = "world";
    
    char *result = ft_strstr(haystack, needle);
    
    if (result) {
        printf("Substring found at position: %ld\n", result - haystack);
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}