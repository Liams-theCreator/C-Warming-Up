#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);
int ft_strlen(char *str);


int ft_strcmp(char *s1, char *s2);
int ft_strncmp(char *s1, char *s2, unsigned int n);
char *ft_strcat(char *dest, char *src);
char *ft_strncat(char *dest, char *src, unsigned int nb);
char *ft_strstr(char *str, char *to_find);
unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

#endif