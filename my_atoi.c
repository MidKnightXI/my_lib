/*
** EPITECH PROJECT, 2020
** my_lib
** File description:
** my_atoi.c
*/

int my_atoi(char *av)
{
    int res = 0;
    int i = 0;

    if (av[0] == '-')
        i = 1;
    for (i; av[i] != '\0'; i++) {
        res *= 10;
        res += av[i] - 48;
    }
    if (av[0] == '-')
        return (res *= -1);
    else
        return res;
}
