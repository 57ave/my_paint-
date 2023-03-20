/*
** EPITECH PROJECT, 2022
** my strcat
** File description:
** cat 2 str
*/
#include "my.h"

char *my_strcat_slash(char *dest, char *str)
{
    int size_str = 0;
    int i = 0;
    char *final_str;

    size_str = my_strlen(dest) +  my_strlen(str);
    final_str = malloc(sizeof(char) * size_str + 2);
    while (dest[i] != '\0') {
        final_str[i] = dest[i];
        i++;
    }
    final_str[i] = '/';
    i++;
    for (int j = 0; str[j] != '\0'; j++) {
        final_str[i] = str[j];
        i++;
    }
    final_str[i] = '\0';
    return final_str;
}

char *my_strcat(char *dest, char *str)
{
    int size_str = 0;
    int i = 0;
    char *final_str;

    size_str = my_strlen(dest) +  my_strlen(str);
    final_str = malloc(sizeof(char) * size_str + 1);
    while (dest[i] != '\0') {
        final_str[i] = dest[i];
        i++;
    }
    for (int j = 0; str[j] != '\0' && str[j] != '\n'; j++) {
        final_str[i] = str[j];
        i++;
    }
    final_str[i] = '\0';
    return final_str;
}
