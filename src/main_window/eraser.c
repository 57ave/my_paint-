/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** eraser
*/
#include "my.h"

void call_eraser(main_st *st)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (st->got_pen[5] <= 0)
            return;
        erase_circle_from_pixel(st, (sfVector2i){sfMouse_getPositionRenderWindow
        (st->window).x, sfMouse_getPositionRenderWindow(st->window).y});
    }
}

void erase_circle_from_pixel(main_st *st, sfVector2i ms_pos)
{
    int calc = 0;
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDHT; x++) {
            calc = ((x - ms_pos.x) * (x - ms_pos.x)
            + (y - ms_pos.y) * (y - ms_pos.y));
            (calc < st->size) ? delete_pixel(st,
            (sfVector2i){return_pos(x - 200), return_pos(y - 50)}) : 0;
        }
    }
}

void delete_pixel(main_st *st, sfVector2i mouse_pos)
{
    st->pixel[(WIDHT * mouse_pos.y + mouse_pos.x) * 4] = sfWhite.r;
    st->pixel[(WIDHT * mouse_pos.y + mouse_pos.x) * 4 + 1] = sfWhite.g;
    st->pixel[(WIDHT * mouse_pos.y + mouse_pos.x) * 4 + 2] = sfWhite.b;
    st->pixel[(WIDHT * mouse_pos.y + mouse_pos.x) * 4 + 3] = sfWhite.a;
}
