/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_strlen
*/
#include <stddef.h>

int my_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

int my_arrlen(char **str)
{
    int i = 0;
    while (str[i] != NULL) {
        i++;
    }
    return i;
}
