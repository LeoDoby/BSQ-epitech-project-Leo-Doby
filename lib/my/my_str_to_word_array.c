/*
** EPITECH PROJECT, 2022
** MY_STR_TO_WORD_ARRAY
** File description:
** split string into words
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

int my_chr_isalphanum(char c)
{
    int val = c;
    if (val < 48 || val > 123)
        return 0;
    if (val > 90 && val < 97)
        return 0;
    if (val > 57 && val < 65)
        return 0;
    return 1;
}

char **my_str_to_word_array(char const *str)
{
    int q = 0; char *tmp; int v = 0; int z = 0;
    char **tab = malloc(sizeof(char *) * (my_strlen(str) + 1));
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_chr_isalphanum(str[i]) == 1)
            q = i;
        while (my_chr_isalphanum(str[i]) == 1)
            i++;
        if (i > my_strlen(str))
            i = my_strlen(str) - 1;
        if (i - q > 0)
            tmp = malloc(sizeof(char) * (i - q + 1));
        for (z = 0; q < i && (my_chr_isalphanum(str[q]) == 1); z++,q++)
            tmp[z] = str[q];
        if (q == i && (my_chr_isalphanum(str[q - 1]) == 1)){
            tmp[z] = '\0'; tab[v] = tmp;
            v++;
        }
    }
    tab[v] = 0;
    return tab;
}
