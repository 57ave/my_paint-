/*
** EPITECH PROJECT, 2022
** navy
** File description:
** compare str and put it
*/
#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return 0;
        i++;
    }
    return 1;
}
