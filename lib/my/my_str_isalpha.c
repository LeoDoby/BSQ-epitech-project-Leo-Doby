/*
** EPITECH PROJECT, 2022
** MY_STR_ISALPHA
** File description:
** return 1 if the string only contain
** alphabetical character else return 0
*/

int my_str_isalpha(char const *str)
{
    if (str == "")
        return 1;
    int i = 0;
    int val = 0;
    while (str[i] != '\0'){
        if (str[i] < 65 || str[i] > 123)
            return 0;
        if (str[i] > 90 && str[i] < 97)
            return 0;
        i++;
    }
    return 1;
}
