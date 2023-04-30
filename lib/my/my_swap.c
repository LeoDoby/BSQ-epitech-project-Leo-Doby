/*
** EPITECH PROJECT, 2022
** MY_SWAP
** File description:
** swap two integer
*/

void my_swap(int *a, int *b)
{
    int ptr = *a;
    *a = *b;
    *b = ptr;
}
