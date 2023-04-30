/*
** EPITECH PROJECT, 2022
** MY_STRNCAT
** File description:
** blablabla
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int z = 0;
    while (dest[i] != '\0'){
        i++;
    }
    while (src[z] != '\0' && nb != 0){
        dest[i] = src[z];
        i++;
        z++;
        nb--;
    }
    if (nb == 0 && src[z] != '\0')
        dest[i + 1] = '\0';
    return dest;
}
