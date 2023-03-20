/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** init help
*/
#include "my.h"

void init_help_window(main_st *st)
{
    sfVideoMode video_mode;
    video_mode.width = HP_W;
    video_mode.height = HP_W;
    video_mode.bitsPerPixel = 32;
    st->hp->h_window = sfRenderWindow_create(video_mode, "Help", sfDefaultStyle,
    NULL);
    sfRenderWindow_setFramerateLimit(st->hp->h_window, 3);
    st->hp->back_rect = sfRectangleShape_create();
    sfRectangleShape_setSize(st->hp->back_rect, (sfVector2f){HP_W, HP_H});
    sfRectangleShape_setFillColor(st->hp->back_rect,
    (sfColor){105, 105, 127, 255});
}

void init_text(main_st *st)
{
    st->hp->top_text = sfText_create();
    sfText_setFont(st->hp->top_text, st->font);
    sfText_setPosition(st->hp->top_text, (sfVector2f){200, 60});
    sfText_setString(st->hp->top_text,
    "This is a little help to understand well my Paint app");
    sfText_setColor(st->hp->top_text, sfWhite);
}

void init_page_texture(main_st *st)
{
    st->hp->page_texture_1 = sfTexture_createFromFile
    ("src/image/help_page/page_1.png", NULL);
    st->hp->page_texture_2 = sfTexture_createFromFile
    ("src/image/help_page/page_3.png", NULL);
    st->hp->page_texture_3 = sfTexture_createFromFile
    ("src/image/help_page/page_4.png", NULL);
    st->hp->page_texture_4 = sfTexture_createFromFile
    ("src/image/help_page/page_5.png", NULL);
    st->hp->page_texture_5 = sfTexture_createFromFile
    ("src/image/help_page/page_2.png", NULL);
}

void init_page_sprite(main_st *st)
{
    st->hp->page_sprite_1 = sfSprite_create();
    sfSprite_setTexture(st->hp->page_sprite_1, st->hp->page_texture_1, sfTrue);
    sfSprite_setPosition(st->hp->page_sprite_1, (sfVector2f){200, 100});
    st->hp->page_sprite_2 = sfSprite_create();
    sfSprite_setTexture(st->hp->page_sprite_2, st->hp->page_texture_2, sfTrue);
    sfSprite_setPosition(st->hp->page_sprite_2, (sfVector2f){200, 100});
    st->hp->page_sprite_3 = sfSprite_create();
    sfSprite_setTexture(st->hp->page_sprite_3, st->hp->page_texture_3, sfTrue);
    sfSprite_setPosition(st->hp->page_sprite_3, (sfVector2f){200, 100});
    st->hp->page_sprite_4 = sfSprite_create();
    sfSprite_setTexture(st->hp->page_sprite_4, st->hp->page_texture_4, sfTrue);
    sfSprite_setPosition(st->hp->page_sprite_4, (sfVector2f){200, 100});
    st->hp->page_sprite_5 = sfSprite_create();
    sfSprite_setTexture(st->hp->page_sprite_5, st->hp->page_texture_5, sfTrue);
    sfSprite_setPosition(st->hp->page_sprite_5, (sfVector2f){200, 100});

}
