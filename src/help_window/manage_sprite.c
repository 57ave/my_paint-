/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** create update and display sprite
*/
#include "my.h"

void create_sprite(main_st *st)
{
    init_text(st);
    st->hp->previous_sprite = sfSprite_create();
    st->hp->previous_texture = sfTexture_createFromFile(
    "src/image/help_page/previous_arrow.png", NULL);
    sfSprite_setTexture(st->hp->previous_sprite,
    st->hp->previous_texture, sfTrue);
    sfSprite_setPosition(st->hp->previous_sprite, (sfVector2f){1580, 840});
    st->hp->next_sprite = sfSprite_create();
    st->hp->next_texture = sfTexture_createFromFile(
    "src/image/help_page/next_arrow.png", NULL);
    sfSprite_setTexture(st->hp->next_sprite,  st->hp->next_texture, sfTrue);
    sfSprite_setPosition(st->hp->next_sprite, (sfVector2f){1750, 840});
}

void good_sprite(main_st *st)
{
    if (st->hp->i_page == 0) {
        sfRenderWindow_drawSprite
        (st->hp->h_window, st->hp->page_sprite_1, NULL);
    }
    if (st->hp->i_page == 1) {
        sfRenderWindow_drawSprite
        (st->hp->h_window, st->hp->page_sprite_2, NULL);
    }
    if (st->hp->i_page == 2) {
        sfRenderWindow_drawSprite
        (st->hp->h_window, st->hp->page_sprite_3, NULL);
    }
    if (st->hp->i_page == 3) {
        sfRenderWindow_drawSprite
        (st->hp->h_window, st->hp->page_sprite_4, NULL);
    }
    if (st->hp->i_page == 4) {
        sfRenderWindow_drawSprite
        (st->hp->h_window, st->hp->page_sprite_5, NULL);
    }
}

void draw_help_sprite(main_st *st)
{
    sfRenderWindow_drawRectangleShape(st->hp->h_window, st->hp->back_rect,
    NULL);
    sfRenderWindow_drawSprite(st->hp->h_window, st->hp->next_sprite, NULL);
    sfRenderWindow_drawSprite(st->hp->h_window, st->hp->previous_sprite, NULL);
    good_sprite(st);
    sfRenderWindow_drawText(st->hp->h_window, st->hp->top_text, NULL);
}
