/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** my str to line array
*/
#include "my.h"

int count_char(char *og_str, int i, char c)
{
    int const_i = i;
    int len = 0;

    while (og_str[i] != '\0' && og_str[i] != c) {
        i++;
    }
    i = i - const_i;
    i += 1;
    return i;
}

int count_bn(char  *og_str, char c)
{
    int i = 0;
    int nb_line = 0;

    while (og_str[i] != '\0') {
        if (og_str[i] == c) {
            nb_line++;
        }
        i++;
    }
    nb_line++;
    return nb_line;
}

int check_sep_char(char *og_str, int i, char c)
{
    if (og_str[i] == c) {
        return i + 1;
    } else {
        return i;
    }
}

char **my_str_to_word_array(char *og_str, char c)
{
    int i = 0;
    int j = 0;
    char **arr;
    int nb_line = count_bn(og_str, c);
    int line_i = 0;
    arr = malloc(sizeof(char *) * (nb_line + 1));
    arr[nb_line] = NULL;
    while (line_i < nb_line) {
        arr[line_i] = malloc(sizeof(char) * count_char(og_str, i, c));
        j = 0;
        while (og_str[i] != c && og_str[i] != '\0') {
            arr[line_i][j] = og_str[i];
            i++;
            j++;
        }
        arr[line_i][j] = '\0';
        i++;
        line_i++;
    }
    return arr;
}
