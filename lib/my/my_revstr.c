/*
** EPITECH PROJECT, 2022
** MY_REVSTR
** File description:
** return a string in reverse
*/
char my_strcpy(char *base, char const *dest);

char *my_revstr(char *str)
{
    int n = 0;
    while (str[n] != '\0')
        n++;
    char base[n];
    n--;
    my_strcpy(base, str);
    for (int i = 0; base[i] != '\0';n--, i++)
        str[n] = base[i];
    return str;
}
