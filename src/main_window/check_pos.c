/*
** EPITECH PROJECT, 2023
** my_paint check differente pos
** File description:
** check_pos
*/
#include "my.h"

int check_sprite(main_st *st, int i)
{
    sfVector2f temp_pos;
    temp_pos = sfSprite_getPosition(st->spt[i - 1]->sprite);
    if (st->event.mouseButton.x > temp_pos.x
    && st->event.mouseButton.x < temp_pos.x + 75
    && st->event.mouseButton.y > temp_pos.y
    && st->event.mouseButton.y < temp_pos.y + 75) {
        return 1;
    }
    return 0;
}

int check_rectshape(main_st *st, int i)
{
    sfVector2f temp_pos;
    temp_pos = sfRectangleShape_getPosition(st->spt[i]->rect);
    if (st->event.mouseButton.x > temp_pos.x
    && st->event.mouseButton.x < temp_pos.x + 60
    && st->event.mouseButton.y > temp_pos.y
    && st->event.mouseButton.y < temp_pos.y + 30) {
        return 1;
    }
    return 0;
}

int check_restore(main_st *st, int i)
{
    sfVector2f temp_pos;
    temp_pos = sfSprite_getPosition(st->spt[i - 1]->sprite);
    if (st->event.mouseButton.x > temp_pos.x
    && st->event.mouseButton.x < temp_pos.x + 75
    && st->event.mouseButton.y > temp_pos.y
    && st->event.mouseButton.y < temp_pos.y + 75) {
        restore_image(st);
        return 1;
    }
    return 0;
}

int check_moover_click(main_st *st)
{
    sfVector2f cur_pos = (sfVector2f){0, 0};
    cur_pos = sfRectangleShape_getPosition(st->spt[14]->rect);
    sfVector2i temp_pos = (sfVector2i){123, 350};
    if (st->event.mouseButton.x > temp_pos.x - 15
    && st->event.mouseButton.x < temp_pos.x + 30
    && st->event.mouseButton.y > temp_pos.y - 100
    && st->event.mouseButton.y < temp_pos.y + 5) {
        return 1;
    }
    return 0;
}
