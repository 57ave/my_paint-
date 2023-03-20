/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** boucle pour run le programme
*/
#include "my.h"

void call_sprite_move(main_st *st)
{
    sprite_move(st, st->got_pen[3]);
    sprite_move(st, st->got_pen[5]);
    sprite_move(st, st->got_pen[11]);
    sprite_move(st, st->got_pen[21]);
}

void run_loop(main_st *st)
{
    while (sfRenderWindow_isOpen(st->window)) {
        sfRenderWindow_clear(st->window, sfBlack);
        zoom(st);
        event(st);
        call_sprite_move(st);
        draw_sprite(st);
        draw_sprite_2(st);
        sfRenderWindow_display(st->window);
    }
}
