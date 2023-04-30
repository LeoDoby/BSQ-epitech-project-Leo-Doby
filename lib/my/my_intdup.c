/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** my_intdup.c
*/
#include "my.h"

int *my_intcpy(int *dest, int const *src)
{
    int i = 0;
    for (i; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

int my_intlen(int const *str)
{
    int i = 0;
    while (str[i] != '\0' ){
        i++;
    }
    return i;
}

int *my_intdup(int const *src)
{
    int *str;
    str = malloc(sizeof(int) * (my_intlen(src) + 1));
    str = my_intcpy(str,src);
    return str;
}
