/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** zooming
*/
#include "my.h"

void init_view(main_st *st)
{
    st->vw->center = (sfVector2f){(float)START_W + WIDHT / 2,
    (float)START_H + HEIGHT / 2};
    st->vw->rect = (sfFloatRect){START_W, START_H, WIDHT, HEIGHT};
    st->vw->view = sfView_createFromRect(st->vw->rect);
    st->vw->initial_view = sfView_createFromRect(st->vw->rect);
    sfView_setCenter(st->vw->view, st->vw->center);
    sfView_setCenter(st->vw->initial_view, st->vw->center);
}

void zoom(main_st *st)
{
    if (st->got_pen[21] < 0) {
        return;
    }
    sfRenderWindow_setMouseCursorVisible(st->window, sfFalse);
    sfVector2f mouse_pos = (sfVector2f){sfMouse_getPositionRenderWindow
    (st->window).x, sfMouse_getPositionRenderWindow(st->window).y - 57};
    sfSprite_setPosition(st->spt[21]->sprite, mouse_pos);
    if (sfMouse_isButtonPressed(sfMouseRight)) {
        sfView_setCenter(st->vw->view, mouse_pos);
        sfView_zoom(st->vw->view, 0.999);
        sfRenderWindow_setView(st->window, st->vw->view);
    } else if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfView_setCenter(st->vw->view, (sfVector2f){WIDHT / 2, HEIGHT / 2});
        sfView_zoom(st->vw->view, 1.001);
        sfRenderWindow_setView(st->window, st->vw->view);
    }
}
