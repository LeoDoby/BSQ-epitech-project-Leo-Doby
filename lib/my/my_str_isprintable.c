/*
** EPITECH PROJECT, 2022
** MY_STR_ISPRINTABLE
** File description:
** return 1 if the character is printable
*/

int my_str_isprintable(char const *str)
{
    int i = 0;
    if (str == "")
        return 1;
    while (str[i] != '\0'){
        if (str[i] > 127 || str[i] < 0)
            return 0;
        i++;
    }
    return 1;
}
