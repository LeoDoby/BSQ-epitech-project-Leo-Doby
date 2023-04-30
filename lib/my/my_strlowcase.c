/*
** EPITECH PROJECT, 2022
** MY_STRLOWCASE
** File description:
** transform all uppercase in lower case
*/

char *my_strlowcase(char *str)
{
    int val = 0;
    for (int i = 0; str[i] != '\0';i++){
        val = str[i];
        if (val > 64 && val < 91)
            str[i] = val +32;
    }
    return str;
}
