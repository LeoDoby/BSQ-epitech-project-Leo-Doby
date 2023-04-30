/*
** EPITECH PROJECT, 2022
** my_getnbr
** File description:
** get nbr from a string
*/
#include "my.h"

int isnbr(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int my_getnbr(char const *str)
{
    long nbr = 0;
    int q = 0;
    int i = 0;
    for (; str[i] != '\0';i++){
        if (isnbr(str[i]) == 1 && nbr == 0)
            q = i;
        if (isnbr(str[i]) == 1)
            nbr = nbr * 10 + str[i] - '0';
        if (isnbr(str[i]) == 0 && nbr != 0)
            break;
        if (str[i] != '+' && str[i] != '-' && isnbr(str[i]) != 1)
            return 0;
    }
    if (nbr > 2147483647)
        return 0;
    if (i > 0 && str[q - 1] == '-')
        nbr = -nbr;
    if (nbr == 2147483648)
        return 0;
    return nbr;
}
