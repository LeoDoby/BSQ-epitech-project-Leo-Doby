/*
** EPITECH PROJECT, 2022
** MY_STR_ISLOWER
** File description:
** return 1 if everything is lower else return 0
*/

int my_str_isupper(char const *str)
{
    int i = 0;
    if (str == "")
        return 1;
    while (str[i] != '\0'){
        if (str[i] > 90 || str[i] < 65)
            return 0;
        i++;
    }
    return 1;
}
