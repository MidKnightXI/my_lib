/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_puterror
*/
#include <unistd.h>

void my_perror(char *str)
{
    write(2, str, my_strlen(str));
}
