/*
** EPITECH PROJECT, 2019
** PSU_minishell1_2019
** File description:
** my_strcmp.c
*/
#include "proto.h"
#include <stdlib.h>

int my_strcmp(char *s, char *str)
{
    int letter = 0;

    if (my_strlen(s) != my_strlen(str))
        return -1;
    for (int i = 0; str[i]; i++) {
        if (s[i] != str[i])
            letter++;
    }
    if (letter != 0)
        return -1;
    else
        return 1;
}

int my_strncmp(char *s, char *str, int len)
{
    int letter = 0;

    if (my_strlen(s) < len)
        return -1;
    for (int i = 0; str[i] && i < len; i++) {
        if (s[i] != str[i])
            letter++;
    }
    if (letter != 0)
        return -1;
    else
        return 1;
}