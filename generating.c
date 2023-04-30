/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** generating.c
*/
#include "my.h"

int error_size(char *buffer)
{
    int nb = 0;
    for (int i = 0; buffer[i] != '\0';i++)
        if (buffer[i] == '\n')
            nb++;
    if (my_getnbr(buffer) != nb -1)
        return 84;
    return 0;
}

int error_char(char *buffer)
{
    int nb = 0;
    for (int i = 0; buffer[i] != '\0';i++){
        if (nb > 0 && buffer[i] != '\n' && buffer[i] != '.' && buffer[i] != 'o')
            return 84;
        if (buffer[i] == '\n')
            nb++;
    }
    return 0;
}

int error_lenght(char **map)
{
    for (int i = 1; map[i + 1] != 0; i++)
        if (my_strlen(map[i]) != my_strlen(map[i + 1]) && map[i + 1] != 0)
            return 84;
    return 0;
}

int bsq(int argc,char *file, struct stat info, char *buffer)
{
    char **map = NULL;
    int **intmap = NULL;
    int *poshighest;
    int fd = open(file,O_RDONLY);
    if (argc == 2)
        read(fd, buffer, info.st_size);
    if (error_size(buffer) == 84 && argc == 2)
        return 84;
    if (error_char(buffer) == 84)
        return 84;
    map = createmap(map,buffer);
    if (error_lenght(map) == 84)
        return 84;
    intmap = createintmap(intmap,buffer);
    intmap = searchsquare(intmap);
    poshighest = malloc(sizeof(int) * 4);
    poshighest = searchhighest(intmap,poshighest);
    map = replacemap(map,poshighest);
    showmap(map);
    return 0;
}
