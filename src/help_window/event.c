/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** event for help window
*/
#include "my.h"

int check_click(main_st *st, sfSprite *sprite)
{
    sfVector2f temp_pos;
    temp_pos = sfSprite_getPosition(sprite);
    if (st->hp->h_event.mouseButton.x > temp_pos.x
    && st->hp->h_event.mouseButton.x < temp_pos.x + 150
    && st->hp->h_event.mouseButton.y > temp_pos.y
    && st->hp->h_event.mouseButton.y < temp_pos.y + 150) {
        return 1;
    }
    return 0;
}

int help_event(main_st *st)
{
    while (sfRenderWindow_pollEvent(st->hp->h_window, &st->hp->h_event)) {
        sfRenderWindow_clear(st->hp->h_window, sfBlack);
        if (st->hp->h_event.type == sfEvtClosed)  {
            sfRenderWindow_close(st->hp->h_window);
            return 1;
        }
    }
    return 0;
}
