/*
** EPITECH PROJECT, 2023
** my.paint
** File description:
** struct
*/
#include "var.h"

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct sprite_s{
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
    sfVector2f initial_position;
    sfRectangleShape *rect;
    sfText *text;
} sprite_st;

typedef struct view_s{
    sfView *view;
    sfView *initial_view;
    sfFloatRect rect;
    sfVector2f center;
    int new_widht;
    int new_height;
} view_st;

typedef struct help_s{
    sfRenderWindow *h_window;
    sfRectangleShape *back_rect;
    sfSprite *page_sprite_1;
    sfSprite *page_sprite_2;
    sfSprite *page_sprite_3;
    sfSprite *page_sprite_4;
    sfSprite *page_sprite_5;
    sfSprite *next_sprite;
    sfSprite *previous_sprite;
    sfTexture *page_texture_1;
    sfTexture *page_texture_2;
    sfTexture *page_texture_3;
    sfTexture *page_texture_4;
    sfTexture *page_texture_5;
    sfTexture *next_texture;
    sfTexture *previous_texture;
    sfRectangleShape *top_text_back;
    sfText *top_text;
    sfEvent h_event;
    char **page_path;
    int i_page;
} help_st;

typedef struct main_s {
    sprite_st *spt[SPT_NB];
    view_st *vw;
    help_st *hp;
    int spt_count;
    sfRenderWindow *window;
    sfColor color;
    sfImage *window_image;
    sfEvent event;
    int got_pen[SPT_NB];
    int write;
    sfUint8 *pixel;
    int size;
    sfImage *wheel_image;
    sfColor fill_color;
    int wheel;
    sfFont *font;
} main_st;


#endif /* !STRUCT_H_ */
