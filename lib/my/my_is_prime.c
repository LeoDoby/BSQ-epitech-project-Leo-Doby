/*
** EPITECH PROJECT, 2022
** MY_IS_PRIME
** File description:
** return 1 if number is prime 0 if not
*/

int my_is_prime(int nb)
{
    int i = 2;
    if (nb == 0 || nb == 1 || nb < 0)
        return (0);
    if (nb == 2)
        return (1);
    while (i < nb){
        if (nb % i == 0)
            return (0);
        ++i;
    }
    return (1);
}
