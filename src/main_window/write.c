/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** write with pain
*/
#include "my.h"

void call_pen(main_st *st)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if (st->got_pen[3] <= 0)
            return;
        if (sfMouse_getPositionRenderWindow(st->window).x > START_W - 5 &&
        sfMouse_getPositionRenderWindow(st->window).x < (WIDHT + START_W - 5) &&
        sfMouse_getPositionRenderWindow(st->window).y < (HEIGHT + START_H - 5)
        && sfMouse_getPositionRenderWindow(st->window).y > START_H - 5) {
        make_circle_from_pixel(st, (sfVector2i){sfMouse_getPositionRenderWindow
        (st->window).x, sfMouse_getPositionRenderWindow(st->window).y});
        }
    }
}

void update_pixel(main_st *st, sfVector2i mouse_pos)
{
    st->pixel[((WIDHT) * (mouse_pos.y) + (mouse_pos.x)) * 4] = st->color.r;
    st->pixel[((WIDHT) * (mouse_pos.y) + (mouse_pos.x)) * 4 + 1] = st->color.g;
    st->pixel[((WIDHT) * (mouse_pos.y) + (mouse_pos.x)) * 4 + 2] = st->color.b;
    st->pixel[((WIDHT) * (mouse_pos.y) + (mouse_pos.x)) * 4 + 3] = st->color.a;
}

void update_brush_pixel(main_st *st, sfVector2i mouse_pos, int i)
{
    st->pixel[(WIDHT * mouse_pos.y + mouse_pos.x) * 4] = st->color.r;
    st->pixel[(WIDHT * mouse_pos.y + mouse_pos.x) * 4 + 1] = st->color.g;
    st->pixel[(WIDHT * mouse_pos.y + mouse_pos.x) * 4 + 2] = st->color.b;
    st->pixel[(WIDHT * mouse_pos.y + mouse_pos.x) * 4 + 3]
    = st->color.a - i;
}

int return_pos(int i)
{
    if (i < 0)
        i *= -1;
    return i;
}

void sprite_move(main_st *st, int i)
{
    if (st->got_pen[return_pos(i)] <= 0) {
        sfRenderWindow_setMouseCursorVisible(st->window, sfTrue);
        return;
    }
    if (i == 11) {
        get_color(st);
    }
    sfRenderWindow_setMouseCursorVisible(st->window, sfFalse);
    sfVector2f mouse_pos = (sfVector2f){sfMouse_getPositionRenderWindow
    (st->window).x, sfMouse_getPositionRenderWindow(st->window).y - 57};
    sfSprite_setPosition(st->spt[return_pos(i)]->sprite, mouse_pos);
}
