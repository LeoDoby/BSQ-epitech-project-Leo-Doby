/*
** EPITECH PROJECT, 2022
** MY_STRCMP
** File description:
** compare two character strings
*/

int my_strcmp(char const *s1, char const *s2)
{
    int val1 = 0;
    int val2 = 0;
    int i = 0;
    while (s1[i] != '\0' || s2[i] != '\0'){
        if (s1[i] != s2[i]){
            val1 = s1[i];
            val2 = s2[i];
            return (val1 - val2);
        }
        i++;
    }
    val1 = s1[i];
    val2 = s2[i];
    return (val1 - val2);
}
