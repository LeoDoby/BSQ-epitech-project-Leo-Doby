/*
** EPITECH PROJECT, 2022
** MY_STRNCMP
** File description:
** same as strcmp but with an n
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int val1 = 0;
    int val2 = 0;
    int i = 0;
    while (n != 0 && s1[i] != '\0' && s2[i] != '\0'){
        if (s1[i] != s2[i]) {
            val1 = s1[i];
            val2 = s2[i];
            return (val1 - val2);
        }
        i++;
        n--;
    }
    val1 = s1[i];
    val2 = s2[i];
    return (val1 - val2);
}
