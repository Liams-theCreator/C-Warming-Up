#include "main.h"


int main() {
    char source[] = "Hello, World!";
    char destination[10];
    unsigned int length;

    length = ft_strlcpy(destination, source, sizeof(destination));

    printf("Source Length: %u\n", length);
    printf("Destination: %s\n", destination);

    return 0;
}