/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** draw sprite
*/
#include "my.h"

void draw_sprite(main_st *st)
{
    sfRenderWindow_drawRectangleShape(st->window, st->spt[1]->rect, NULL);
    sfTexture_updateFromPixels
    (st->spt[0]->texture, st->pixel, WIDHT, HEIGHT, 0, 0);
    sfRenderWindow_drawSprite(st->window, st->spt[0]->sprite, NULL);
    sfRenderWindow_drawRectangleShape(st->window, st->spt[6]->rect, NULL);
    sfRenderWindow_drawRectangleShape(st->window, st->spt[7]->rect, NULL);
    sfRenderWindow_drawRectangleShape(st->window, st->spt[8]->rect, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[2]->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[3]->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[4]->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[5]->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[10]->sprite, NULL);
    sfRenderWindow_drawRectangleShape(st->window, st->spt[12]->rect, NULL);
    sfRenderWindow_drawRectangleShape(st->window, st->spt[13]->rect, NULL);
    sfRenderWindow_drawRectangleShape(st->window, st->spt[14]->rect, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[16]->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[15]->sprite, NULL);
    sfRenderWindow_drawRectangleShape(st->window, st->spt[18]->rect, NULL);
    sfRenderWindow_drawText(st->window, st->spt[19]->text, NULL);
}

void draw_sprite_2(main_st *st)
{
    sfRenderWindow_drawSprite(st->window, st->spt[st->wheel]->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[11]->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[20]->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[21]->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[22]->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[23]->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[25]->sprite, NULL);
    sfRenderWindow_drawSprite(st->window, st->spt[24]->sprite, NULL);
    if (st->got_pen[18] > 0) {
        sfRenderWindow_drawRectangleShape(st->window, st->spt[28]->rect, NULL);
        sfRenderWindow_drawText(st->window, st->spt[26]->text, NULL);
        sfRenderWindow_drawRectangleShape(st->window, st->spt[29]->rect, NULL);
        sfRenderWindow_drawText(st->window, st->spt[27]->text, NULL);
    }
}
