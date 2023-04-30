/*
** EPITECH PROJECT, 2022
** MY_PUT_NBR
** File description:
** display any number put in the parameter
*/
#include "my.h"
int my_put_nbr(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        my_putchar(50);
        my_putchar(49);
        my_putchar(52); my_putchar(55);
        my_putchar(52); my_putchar(56);
        my_putchar(51); my_putchar(54);
        my_putchar(52); my_putchar(56);
    } else {
        if (nb < 0) {
            my_putchar('-');
            nb = -nb;
        }
        if (nb >= 10) {
            my_put_nbr (nb / 10);
        }
        my_putchar(48 + nb % 10);
    }
    return 0;
}
