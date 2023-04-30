/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** intmap.c
*/

#include "my.h"

int minint(int a, int b, int c)
{
    int min;
    if (a == -1 || b == -1 || c == -1)
        return 0;
    if (a <= b && a <= c)
        min = a;
    if (b <= a && b <= c)
        min = b;
    if (c <= a && c <= b)
        min = c;
    return min;
}

int **isdot(int **tmpmap, int i, int j)
{
    int a;
    int b;
    int c;
    int min;
    if (tmpmap[i][j] != 1)
        return tmpmap;
    if (i < 2 || j < 1){
        tmpmap[i][j] = 1;
        return tmpmap;
    }
    a = tmpmap[i - 1][j];
    b = tmpmap[i][j - 1];
    c = tmpmap[i - 1][j - 1];
    min = minint(a,b,c);
    tmpmap[i][j] = min + 1;
    return tmpmap;
}

int **searchsquare(int **map)
{
    for (int i = 0;map[i] != 0;i++){
        for (int j = 0; map[i][j] != '\0'; j++){
            map = isdot(map,i,j);
        }
    }
    return map;
}

int createpint(char *buffer, int i)
{
    if (buffer[i] == '.')
        return 1;
    if (buffer[i] != '.')
        return -1;
    return 0;
}

int **createintmap(int **intmap, char *buffer)
{
    int nb = 0;
    int *tmp = malloc(sizeof(int) * (my_strlen(buffer) + 1));
    int u = 0;
    for (int i = 0; buffer[i] != '\0';i++)
        if (buffer[i] == '\n')
            nb++;
    intmap = malloc(sizeof(int *) * (nb  + 2));
    nb = 0;
    for (int i = 0; buffer[i] != '\0';i++){
        tmp[u] = createpint(buffer,i);
        u++;
        if (buffer[i] == '\n'){
            tmp[u] = '\0';
            intmap[nb] = my_intdup(tmp);
            u = 0;
            nb++;
        }
    }
    intmap[nb] = NULL;
    return intmap;
}
