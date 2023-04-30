/*
** EPITECH PROJECT, 2022
** my_octal
** File description:
** return an octal number from an decimal number
*/
#include "my.h"

long my_octal(long nb)
{
    long i = 0;
    long result = 0;
    for (i; nb > 0;i++){
        result += nb % 8 * my_compute_power_rec(10, i);
        nb /= 8;
        }
    return result;
}
