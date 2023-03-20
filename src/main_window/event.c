/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** event
*/
#include "my.h"

void clear(main_st *st)
{
    sfTexture_updateFromImage(st->spt[0]->texture,
    st->window_image, 0,0);
}

void event(main_st *st)
{
    while (sfRenderWindow_pollEvent(st->window, &st->event)) {
        if (st->event.type == sfEvtClosed)  {
            sfRenderWindow_close(st->window);
        }
        if (st->event.type == sfEvtMouseButtonPressed) {
            get_indice(st);
            update_color_wheel(st);

        }
        call_pen(st);
        call_eraser(st);
    }
}
