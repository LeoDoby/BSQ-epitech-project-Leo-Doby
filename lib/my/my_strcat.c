/*
** EPITECH PROJECT, 2022
** MY_STRCAT
** File description:
** a funtion that concatenate two string
*/
#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int z = 0;
    while (dest[i] != '\0'){
        i++;
    }
    while (src[z] != '\0'){
        dest[i] = src[z];
        i++;
        z++;
    }
    return dest;
}
