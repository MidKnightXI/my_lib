/*
** EPITECH PROJECT, 2020
** my_lib
** File description:
** my_getnumber.c
*/

int my_getnbr(char *str)
{
    int i = 0;
    int num = 0;

    if (str[0] == '-' && str[1] != '\0')
        i++;
    for (i; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
	        return 84;
    num = num + str[i] - 48;
    num = num * 10;
    }
    num /= 10;
    if (str[0] == '-') {
        return (-1 * num);
    } else {
        return num;
    }
}
