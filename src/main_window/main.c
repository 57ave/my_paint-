/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** main
*/
#include "my.h"

main_st *init_struct(void)
{
    main_st *st = malloc(sizeof(main_st));
    sprite_st *spt = malloc(sizeof(sprite_st));
    for (int i = 0; i <= SPT_NB; i++)
        st->spt[i] = malloc(sizeof(sprite_st));
    view_st *vw = malloc(sizeof(view_st));
    st->hp = malloc(sizeof(help_st));
    st->spt_count = 0;
    for (int i = 0; i < SPT_NB; i++) {
        st->got_pen[i] = -1;
    }
    st->size = 1;
    st->color = sfBlack;
    st->wheel = 9;
    return st;
}

int main(int ac, char **av)
{
    main_st *st = init_struct();
    create_window(st);
    create_window2(st);
    create_window3(st);
    create_wheel_image(st);
    init_image(st);
    init_view(st);
    run_loop(st);
}
