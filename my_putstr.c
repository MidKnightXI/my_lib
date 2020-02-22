/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2019
** File description:
** my_putchar.c
*/
#include <unistd.h>

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}
