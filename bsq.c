/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** bsq.c
*/
#include "my.h"



int comparenbr(int *intmap,int nb)
{
    for (int j = 0; intmap[j] != '\0'; j++){
        if (intmap[j] > nb)
            nb = intmap[j];
    }
    return nb;
}

int *searchhighest(int **intmap,int *poshighest)
{
    int highest_nbr = 0;
    int i = 0;
    int j = 0;
    for (int u = 0; intmap[u] != 0;u++)
        highest_nbr = comparenbr(intmap[u],highest_nbr);
    for (; intmap[i][j] != highest_nbr;j++){
        if (intmap[i][j] == '\0'){
            i++;
            j = -1;
        }
    }
    poshighest[0] = i;
    poshighest[1] = j;
    poshighest[2] = highest_nbr;
    poshighest[3] = '\0';
    return poshighest;
}

int checknbr(char *str)
{
    for (int i = 0; i < my_strlen(str) || str[i] != '\\';i++){
        if (i > 0 && (str[i] == '\\' || str[i] == '\0'))
            return 1;
        if (isnbr(str[i]) == 0){
            return 0;
        }
    }
    return 1;
}

char *createbuffer(char *buffer,char *str,int i)
{
    int j = i;
    int a = 1; int u = 1;
    int z = 0;
    int len = my_strlen(str);
    buffer[0] = '\n';
    while (i > 1){
        buffer[a] = str[z];
        a++;
        z++;
        if (z == len)
            z = 0;
        if (a - 1 == (j * u) - 1){
            buffer[a] = '\n';
            a++;
            u++;
            i--;
        }
    }
    buffer[a] = '\0';
    return buffer;
}

int main(int argc, char **argv)
{
    struct stat info;
    char *file, *buffer;
    int nb;
    if (argc == 1 || argc > 3)
        return 84;
    file = argv[1];
    if (stat(argv[1], &info) == -1){
        if (checknbr(argv[1]) == 0)
            return 84;
        nb = my_getnbr(argv[1]);
        buffer = malloc(sizeof(char) * (nb * 2 + my_compute_power_rec(nb,2)));
        createbuffer(buffer,argv[2],my_getnbr(argv[1]) + 1);
    } else {
        if (info.st_size == 0)
            return 84;
        buffer = malloc(sizeof(char) * info.st_size + 1);
    }
    if (bsq(argc,file,info,buffer) == 84)
        return 84;
    return 0;
}
