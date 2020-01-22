/*
** EPITECH PROJECT, 2020
** my_lib
** File description:
** my_revstr.c
*/

char *my_revstr(char *str)
{
    char tempo = 0;

    for (int i = 0; i < (my_strlen(str) / 2); i++) {
        tempo = str[i];
        str[i] = str[(my_strlen(str) - 1 - i)];
        str[(my_strlen(str) - 1 - i)] = tempo;
    }
    return (str);
}
