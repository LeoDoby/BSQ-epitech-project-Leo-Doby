/*
** EPITECH PROJECT, 2022
** MY_STRNCPY
** File description:
** copy n character in a string
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0;i != n; i++) {
        dest[i] = src[i];
        if (src[i] == '\0'){
            dest[i] = '\0';
            return dest;
            }
    }
    return dest;
}
