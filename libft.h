#ifndef LIBFT_H
#define LIBFT_H
#include <stdio.h>

int ft_isalpha(int a);
int ft_isdigit(int a);
int ft_strlen(const char *s);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);
#endif