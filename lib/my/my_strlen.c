/*
** EPITECH PROJECT, 2022
** MY_STRLEN
** File description:
** return the number of character in the string
*/
int my_strlen(char const *str)
{
    int i = 0;
    while (str[i] != '\0' ){
        i++;
    }
    return i;
}
