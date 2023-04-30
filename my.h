/*
** EPITECH PROJECT, 2022
** MY_H
** File description:
** contain the prototype of all function in libmy
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <curses.h>


#ifndef MY_H_
    #define MY_H_

typedef struct check{
    int R;
    int r;
    int l;
    int t;
    int d;
    int a;
}*check;

void my_putchar(char c);
int flags(int argc,char **argv, struct check *flag);
struct check *checkd(char *str,struct check *flag);
struct check *checkt(char *str,struct check *flag);
struct check *checkrev(char *str, struct check *flag);
int *my_intcpy(int *dest, int const *src);
int my_intlen(int const *str);
int *my_intdup(int const *src);
int my_put_int(int const *str);
int comparenbr(int *intmap,int nb);
int *searchhighest(int **intmap,int *poshighest);
int bsq(int argc,char *file, struct stat info, char *buffer);
int main(int argc, char **argv);
int minint(int a, int b, int c);
int **isdot(int **tmpmap, int i, int j);
int **searchsquare(int **map);
int createpint(char *buffer, int i);
int **createintmap(int **intmap, char *buffer);
char **replacemap(char **map, int *pos);
void showmap(char **map);
char **createmap(char **map,char *buffer);
struct check *checkrec(char *str, struct check *flag);
struct check *checka(char *str,struct check *flag);
struct check *checkl(char *str, struct check *flag);
void flagd(int argc,char **argv,struct check *flag);
void writeperm1(int tmp,struct dirent *ls);
char *writeperm2(char perm[],int i,int a);
void writedir(DIR *dirs,struct check *flag,char *tmp);
int dirorfile(char *tmp,struct stat buf);
int writethatdir(char *tmp,int nb, int u, struct check *flag);
int checkfiles(int argc, char **argv,struct check *flag);
int countnb(int argc, struct stat buf,char **argv);
void thedflag(int argc, char **argv);
int nofile(int argc,char **argv);
int isdir(char *str);
void writeinfo(struct dirent *ls,struct check *flag);
int checkifparam(char *str);
int checkcurrent(int argc,char **argv);
long my_octal(long nb);
int isnbr(char c);
int my_compute_power_rec(int nb, int p);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int p);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_show_word_array(char * const *tab);
char **my_str_to_word_array(char const *str);
int my_chr_isalphanum(char c);
char *my_strdup(char const *src);
int error_char(char *buffer);
int error_size(char *buffer);

#endif //MY_H_
