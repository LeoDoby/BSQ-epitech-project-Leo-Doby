/*
** EPITECH PROJECT, 2022
** MY_SHOW_WORD_ARRAY
** File description:
** disp all word array
*/

char my_putstr(char const *str);

void my_putchar(char c);

int my_show_word_array(char * const *tab)
{
    int i = 0;
    while (tab[i] != 0){
        my_putstr(tab[i]);
        my_putchar(10);
        i++;
    }
}
