/*
** EPITECH PROJECT, 2022
** MY_STR_ISNUM
** File description:
** return 1 if everything is number else return 0
*/

int my_str_isnum(char const *str)
{
    if (str == "")
        return 0;
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] > 57 || str[i] < 48)
            return 0;
        i++;
    }
    return i;
}
