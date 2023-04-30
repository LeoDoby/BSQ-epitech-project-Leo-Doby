/*
** EPITECH PROJECT, 2022
** MY_STRCAPITALIZE
** File description:
** capitalize all first letter of each word
*/
#include <stdio.h>

char *my_strlowcase(char *);
char *my_strcapitalize(char *str)
{
    int uppercase = 1;
    int val = 0;

    str = my_strlowcase(str);
    for (int i = 0; str[i] != '\0';){
        val = str[i];
        if (val > 47 && val < 58)
            uppercase = 0;
        if (uppercase == 1 && val > 96 && val < 123) {
            str[i] = val - 32;
            uppercase = 0;
        }
        if ((val < 97 || val > 123) && (val < 47 || val > 58))
            uppercase = 1;
        i++;
    }
    return str;
}
