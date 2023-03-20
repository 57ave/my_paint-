/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** manage_page
*/
#include "my.h"

void next_page(main_st *st)
{
    if (st->hp->i_page == 4)
        return;
    st->hp->i_page++;
}

void previous_page(main_st *st)
{
    if (st->hp->i_page == 0)
        return;
    st->hp->i_page--;
}
