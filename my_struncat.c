/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** my_struncat.c
*/
#include "proto.h"
#include <stdlib.h>

char *my_struncat(char *str, char *s)
{
    int i = 0;
    int j = 0;
    char *res = malloc(sizeof (char) * (my_strlen(str) - (my_strlen(s) + 1)));

    for (; str[i] == s[i]; i++);
    for (; str[i]; j++, i++)
        res[j] = str[i];
    res[j] = '\0';
    return res;
}