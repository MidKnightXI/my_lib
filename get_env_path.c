/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** get_path
*/
#include "proto.h"
#include <stdlib.h>

char *clean_path(char *path, int len)
{
    char *cleaned = malloc(sizeof (char) * (my_strlen(path) + 1));
    int i = 0;

    for (; path && path[len]; i++, len++)
        cleaned[i] = path[len];
    cleaned[i] = '\0';
    return cleaned;
}

char *get_path(char **envp, char *src)
{
    char *path;
    int len = my_strlen(src);
    int i = 0;

    for (; envp[i] != NULL && my_strncmp(envp[i], src, len) == -1; i++);
    path = clean_path(envp[i], len);
    return path;
}