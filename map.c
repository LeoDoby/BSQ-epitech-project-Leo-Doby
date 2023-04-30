/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** map.c
*/
#include "my.h"

char **replacemap(char **map, int *pos)
{
    int y = pos[0] - pos[2] + 1;
    int x = 0;
    for (; y <= pos[0];y++){
        for (x = pos[1] - pos[2] + 1; x <= pos[1];x++){
            map[y][x] = 'x';
        }
    }
    return map;
}

void showmap(char **map)
{
    for (int i = 1; map[i] != NULL;i++)
        my_putstr(map[i]);
}

char **createmap(char **map,char *buffer)
{
    int u = 0;
    int nb = 0;
    char *tmp = malloc(sizeof(char) * my_strlen(buffer));
    for (int i = 0; buffer[i] != '\0';i++)
        if (buffer[i] == '\n')
            nb++;
    map = malloc(sizeof(char *) * (nb + 2));
    nb = 0;
    for (int i = 0; buffer[i] != '\0';i++){
        tmp[u] = buffer[i];
        u++;
        if (buffer[i] == '\n'){
            tmp[u] = '\0';
            map[nb] = my_strdup(tmp);
            u = 0;
            nb++;
        }
    }
    map[nb] = 0;
    return map;
}
