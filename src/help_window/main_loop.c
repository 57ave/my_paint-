/*
** EPITECH PROJECT, 2023
** py_paint
** File description:
** help window running
*/
#include "my.h"

int main_help(main_st *st)
{
    st->hp->i_page = 0;
    init_page_texture(st);
    init_page_sprite(st);
    init_help_window(st);
    run_help_loop(st);
}

void run_help_loop(main_st *st)
{
    create_sprite(st);
    init_text(st);
    while (sfRenderWindow_isOpen(st->hp->h_window)) {
        sfRenderWindow_clear(st->hp->h_window, sfBlack);
        if (help_event(st))
            return;
        if (sfEvtMouseButtonPressed == st->hp->h_event.type) {
            (check_click(st, st->hp->next_sprite)) ?
            next_page(st) : 0;
            (check_click(st, st->hp->previous_sprite)) ?
            previous_page(st) : 0;
        }
        draw_help_sprite(st);
        sfRenderWindow_display(st->hp->h_window);
    }
}
