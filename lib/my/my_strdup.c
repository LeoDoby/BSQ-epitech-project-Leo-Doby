/*
** EPITECH PROJECT, 2022
** MY_STRDUP
** File description:
** allocate memory and copie the string in argument inside
*/
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
    char *str;
    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    str = my_strcpy(str,src);
    return str;
}
