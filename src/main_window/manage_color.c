/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** color
*/
#include "my.h"

void update_color_wheel(main_st *st)
{
    if (st->got_pen[16] > 0) {
        st->window_image =
        sfImage_createFromFile("src/image/color_wheel_pastel_icon.png");
        st->wheel_image = sfTexture_copyToImage(st->spt[17]->texture);
        st->wheel = 17;
    }
    if (st->got_pen[16] < 0) {
        st->window_image =
        sfImage_createFromFile("src/image/color_wheel_pastel.png");
        st->wheel_image = sfTexture_copyToImage(st->spt[9]->texture);
        st->wheel = 9;
    }
}

void create_wheel_image(main_st *st)
{
    st->wheel_image = sfTexture_copyToImage(st->spt[9]->texture);
}

int check_hover_wheel(main_st *st)
{
    sfVector2i temp_pos = (sfVector2i){1670, 65};
    if (st->event.mouseButton.x > temp_pos.x
    && st->event.mouseButton.x < temp_pos.x + 225
    && st->event.mouseButton.y > temp_pos.y
    && st->event.mouseButton.y < temp_pos.y + 215) {
        return 1;
    }
    return 0;
}

void get_color(main_st *st)
{
    sfVector2i pos;
    if (st->event.type == sfEvtMouseButtonPressed && check_hover_wheel(st)) {
        pos = sfMouse_getPositionRenderWindow(st->window);
        st->color = sfImage_getPixel(st->wheel_image,
        (unsigned int)(pos.x - 90), (unsigned int)(pos.y - 40));
        sfRectangleShape_setFillColor(st->spt[12]->rect, st->color);
    }
}
