/*
** EPITECH PROJECT, 2022
** MY_STRSTR
** File description:
** search a string in a larger string
*/
#include <stdio.h>

char *my_strstr(char *str, char const *to_find)
{
    if (to_find == "")
        return str;
    int i = 0; int z = 0; int q = 0;
    while (str[i] != '\0'){
        if (str[i] == to_find[0])
            q = i;
        while (str[i] == to_find[z] && str[i] != '\0' && to_find[z] != '\0'){
            z++; i++;
        }
        if (to_find[z] == '\0'){
            return (&str[q]);
        }
        if (str[i] != to_find[z] && z != 0)
            i = i - z;
        if (str[i] != '\0')
            i++;
        z = 0;
    }
    return 0;
}
