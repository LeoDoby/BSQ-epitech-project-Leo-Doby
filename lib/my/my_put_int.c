/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** my_putpint.c
*/

#include "my.h"

int my_put_int(int const *str)
{
    for (int i = 0; str[i] != '\0' ;i++){
        my_put_nbr(str[i]);
        my_putchar(' ');
        if (i == 10)
            my_putchar('\n');
    }
    return 0;
}
