/*
** EPITECH PROJECT, 2020
** my_lib
** File description:
** my_strcpy
*/

char *my_strcpy(char *dest, char const *src)
{
    char count = 0;

    while (src[count] != '\0') {
        dest[count] = src[count];
        count++;
    }
    dest[count] = '\0';
    return dest;
}
