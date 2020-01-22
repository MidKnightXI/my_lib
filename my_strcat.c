/*
** EPITECH PROJECT, 2020
** my_lib
** File description:
** my_strcat
*/

int my_strcat(char *dest, char *src, char *buff)
{
    int len1 = my_strlen(dest);
    int len2 = my_strlen(src);
    int len3 = my_strlen(buff);
    int total = len1 + len2;

    my_strcpy(dest + my_strlen(dest), src);

    for (int i = 0; i < len3; i++) {
        for (int j = 0; j < total; j++) {
            if (buff[i] != dest[j])
                return 1;
        }
    }
}
