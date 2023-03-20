/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** init window and sprite
*/
#include "my.h"

void init_image(main_st *st)
{
    int max = WIDHT * HEIGHT * 4;
    st->pixel = malloc(sizeof(sfUint8) * max);
    for (int i = 0; i < max; i += 4) {
        st->pixel[i] = 255;
        st->pixel[i + 1] = 255;
        st->pixel[i + 2] = 255;
        st->pixel[i + 3] = 255;
    }
}

void restore_image(main_st *st)
{
    free(st->pixel);
    int max = WIDHT * HEIGHT * 4;
    st->pixel = malloc(sizeof(sfUint8) * max);
    for (int i = 0; i < max; i += 4) {
        st->pixel[i] = 255;
        st->pixel[i + 1] = 255;
        st->pixel[i + 2] = 255;
        st->pixel[i + 3] = 255;
    }
}

void init_window(main_st *st)
{
    sfVideoMode video_mode;
    video_mode.width = 1920;
    video_mode.height = 1080;
    video_mode.bitsPerPixel = 32;
    st->window = sfRenderWindow_create(video_mode, "My window", sfDefaultStyle
    , NULL);
    init_image(st);
    sfRenderWindow_setFramerateLimit(st->window, 120);
    st->spt[0]->sprite = sfSprite_create();
    st->spt[0]->texture = sfTexture_create(WIDHT, HEIGHT);
    sfSprite_setTexture(st->spt[0]->sprite,st->spt[0]->texture, sfTrue);
    sfSprite_setPosition(st->spt[0]->sprite,(sfVector2f){START_W, START_H});
    st->spt_count++;
    st->font = sfFont_createFromFile("./src/image/Walkway_Black.ttf");
}

sfSprite *init_sprite(sfSprite *sprite, sfTexture *texture, sfBool bool)
{
    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, bool);
    return sprite;
}
