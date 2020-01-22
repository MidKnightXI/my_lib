/*
** EPITECH PROJECT, 2020
** my_lib
** File description:
** my_printf.c
*/
#include <stdarg.h>

//this project is there juste to show how to properly use stdarg.h
//don't use it even if its working only with the flags:
//"%d"  "%i"  "%c"  "%s" "%n" "%%"

//WARNING: this project isn't in conformity with the {EPITECH CODING STYLE 2019}

int my_printf(char *str, ...)
{
    int i = 0;
    int j = 1;
    va_list ap;

    va_start(ap, str);
    while (str[i] != '\0') {
        if (str[i] == '%' && str[j] == 'd')
            my_put_nbr(va_arg(ap, int));
        if (str[i] == '%' && str[j] == 'i')
            my_put_nbr(va_arg(ap, int));
        if (str[i] == '%' && str[j] == 'c')
            my_putchar((char)va_arg(ap, int));
        if (str[i] == '%' && str[j] == 's')
            my_putstr(va_arg(ap, char *));
        if (str[i] == '%' && str[j] == 'n')
            return (my_strlen(va_arg(ap, char *)));
        if (str[i] == '%' && str[j] == '%')
            my_putchar('%');
        i += 1;
        j += 1;
    }
}
