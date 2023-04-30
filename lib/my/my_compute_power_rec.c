/*
** EPITECH PROJECT, 2022
** MY_COMPUTE_POWER_REC
** File description:
** return the first argument power the second argument
*/
int my_compute_power_rec(int nb, int p)
{
    if (p < 0)
        return (0);
    if (p == 0)
        return (1);
    if (p != 0){
        return nb * my_compute_power_rec(nb, p - 1);
    }
}
