/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** handle_click
*/
#include "my.h"

void update_rect_state(main_st *st, int i)
{
    if (st->got_pen[i] < 0) {
        st->got_pen[i] = i;
    } else {
        st->got_pen[i] = -i;
    }
}

void update_pen_state(main_st *st, int i)
{
    if (st->got_pen[i] < 0) {
        st->got_pen[i] = i;
    } else {
        sfSprite_setPosition(st->spt[i]->sprite,
        (sfVector2f)st->spt[i]->initial_position);
        st->got_pen[i] = -i;
    }
}

void save(main_st *st)
{
    st->window_image = sfImage_createFromPixels(WIDHT, HEIGHT, st->pixel);
    sfImage_saveToFile(st->window_image, "my_draw.png");
}

int get_indice(main_st *st)
{
    if (check_moover_click(st))
        update_line_size(st);
    if (check_sprite(st, 3))
        update_pen_state(st, 3);
    if (check_sprite(st, 5))
        update_pen_state(st, 5);
    if (check_sprite(st, 11))
        update_pen_state(st, 11);
    if (check_sprite(st, 16))
        update_pen_state(st, 16);
    if (check_sprite(st, 21))
        update_pen_state(st, 21);
    (check_sprite(st, 23)) ? restore_image(st) : 0;
    (check_rectshape(st, 18)) ? update_rect_state(st, 18) : 0;
    (check_sprite(st, 25)) ? update_pen_state(st, 16) : 0;
    (check_sprite(st, 28)) ? save(st) : 0;
    (check_rectshape(st, 29)) ? main_help(st) : 0;
    return -1;
}
