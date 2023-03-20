/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** manage_struct
*/
#include "my.h"

void create_rect_shape
(main_st *st, sfVector2f position, sfVector2f size, sfColor color)
{
    st->spt[st->spt_count]->rect = sfRectangleShape_create();

    sfRectangleShape_setPosition(st->spt[st->spt_count]->rect, position);

    sfRectangleShape_setSize(st->spt[st->spt_count]->rect, (sfVector2f)size);

    sfRectangleShape_setOutlineThickness(st->spt[st->spt_count]->rect, -3);
    sfRectangleShape_setOutlineColor(st->spt[st->spt_count]->rect, sfBlack);
    sfRectangleShape_setFillColor(st->spt[st->spt_count]->rect,
    color);
    st->spt_count++;
}

void create_sprite_from_file(main_st *st, char *path, sfVector2f position,
sfVector2f size)
{
    st->spt[st->spt_count]->texture =
    sfTexture_createFromFile(path, NULL);
    st->spt[st->spt_count]->sprite =
    init_sprite(st->spt[st->spt_count]->sprite,
    st->spt[st->spt_count]->texture, sfFalse);
    st->spt[st->spt_count]->position = position;
    sfSprite_setPosition(st->spt[st->spt_count]->sprite,
    st->spt[st->spt_count]->position);
    st->spt[st->spt_count]->initial_position = position;
    st->spt[st->spt_count]->rect = sfRectangleShape_create();
    sfRectangleShape_setTexture(st->spt[st->spt_count]->rect,
    st->spt[st->spt_count]->texture, sfTrue);
    sfRectangleShape_setSize(st->spt[st->spt_count]->rect, (sfVector2f)size);
    st->spt_count++;
}

void create_button_text
(main_st *st, sfVector2f position, sfVector2f size, char *string)
{
    st->spt[st->spt_count]->text = sfText_create();
    sfText_setFont(st->spt[st->spt_count]->text, st->font);
    st->spt[st->spt_count]->sprite = sfSprite_create();
    sfText_setString(st->spt[st->spt_count]->text, string);
    sfText_setPosition(st->spt[st->spt_count]->text, position);
    sfText_setColor(st->spt[st->spt_count]->text,
    sfWhite);
    sfText_setCharacterSize(st->spt[st->spt_count]->text, 24);
    st->spt_count++;
}
