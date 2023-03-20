/*
** EPITECH PROJECT, 2023
** Lib
** File description:
** my_putstr
*/
#include <unistd.h>

void my_putstr(char *string)
{
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    write(1, string, i);
}
