/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** shaper.c
*/
#include "my.h"

void make_circle_from_pixel(main_st *st, sfVector2i ms_pos)
{
    int calc = 0;
    for (int y = 0; y < 1080; y++) {
        for (int x = 0; x < 1920; x++) {
            calc = ((x - ms_pos.x) * (x - ms_pos.x)
            + (y - ms_pos.y) * (y - ms_pos.y));
            (calc < st->size) ? update_pixel(st,
            (sfVector2i){return_pos(x - 200), return_pos(y - 50)}) : 0;
        }
    }
}

void brush_circle_from_pixel(main_st *st, sfVector2i ms_pos)
{
    int calc = 0;
    int i = 0;
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDHT; x++) {
            calc = ((x - ms_pos.x) * (x - ms_pos.x)
            + (y - ms_pos.y) * (y - ms_pos.y));
            (calc < st->size) ? update_brush_pixel(st,
            (sfVector2i){return_pos(x - 200), return_pos(y - 50)}, i)
            , i += 4 : 0;
        }
    }
}

void update_line_size(main_st *st)
{
    sfVector2f cur_pos = (sfVector2f){0, 0};
    sfMouse_getPositionRenderWindow(st->window);
    sfRectangleShape_setPosition(st->spt[14]->rect,
    (sfVector2f){sfRectangleShape_getPosition(st->spt[14]->rect).x,
    sfMouse_getPositionRenderWindow(st->window).y});
    cur_pos = sfRectangleShape_getPosition(st->spt[14]->rect);
    st->size = 1 * (cur_pos.y - 249);
}
