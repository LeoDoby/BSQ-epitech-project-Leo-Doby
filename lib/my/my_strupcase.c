/*
** EPITECH PROJECT, 2022
** MY_STRUPCASE
** File description:
** put every letter in uppercase
*/

char *my_strupcase(char *str)
{
    int val = 0;
    for (int i = 0; str[i] != '\0';i++){
        val = str[i];
        if (val > 96 && val < 123)
            str[i] = val -32;
    }
    return str;
}
