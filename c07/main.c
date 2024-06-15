#include "main.h"

int main() {
    // Test case 1: Normal case with multiple strings and a separator
    char *strings1[] = {"Hello", "world", "from", "ChatGPT"};
    char *sep1 = ", ";
    char *result1 = ft_strjoin(4, strings1, sep1);
    printf("Result 1: \"%s\"\n", result1);
    free(result1); // Don't forget to free the allocated memory

    // Test case 2: No strings, should return an empty string
    char *strings2[] = {};
    char *sep2 = "-";
    char *result2 = ft_strjoin(0, strings2, sep2);
    printf("Result 2: \"%s\"\n", result2);
    free(result2);

    // Test case 3: Single string, no separators needed
    char *strings3[] = {"SingleString"};
    char *sep3 = "-";
    char *result3 = ft_strjoin(1, strings3, sep3);
    printf("Result 3: \"%s\"\n", result3);
    free(result3);

    // Test case 4: Multiple strings with empty separator
    char *strings4[] = {"This", "is", "a", "test"};
    char *sep4 = "";
    char *result4 = ft_strjoin(4, strings4, sep4);
    printf("Result 4: \"%s\"\n", result4);
    free(result4);

    // Test case 5: Multiple strings with space as separator
    char *strings5[] = {"Concatenate", "with", "spaces"};
    char *sep5 = " ";
    char *result5 = ft_strjoin(3, strings5, sep5);
    printf("Result 5: \"%s\"\n", result5);
    free(result5);

    return 0;
}