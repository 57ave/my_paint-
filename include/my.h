/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my_hunter
*/
#include <SFML/System/Export.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/System/Clock.h>
#include <SFML/Window/Types.h>
#include <SFML/Graphics/Export.h>
#include <SFML/Graphics/Image.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "struct.h"
#include "var.h"
#include "help.h"

#ifndef my_paint
    #define my_paint

struct sprite_st;

struct help_st;

struct main_st;

/*Init functions*/

void init_window(main_st *);

sfSprite *init_sprite(sfSprite *, sfTexture *, sfBool);

void run_loop(main_st *);

void init_image(main_st *);

void create_window(main_st *st);

void create_window2(main_st *st);

void create_window3(main_st *st);

void create_wheel_image(main_st *st);

void draw_sprite(main_st *st);

void draw_sprite_2(main_st *st);

void init_view(main_st *st);

/*Manage sprite */

void create_sprite_from_file(main_st *, char *, sfVector2f, sfVector2f);

void create_rect_shape(main_st *, sfVector2f, sfVector2f, sfColor);

void sprite_move(main_st *st, int i);

void make_circle_from_pixel(main_st *, sfVector2i);

void brush_circle_from_pixel(main_st *, sfVector2i);

void call_pen(main_st *st);

void get_color(main_st *st);

void delete_pixel(main_st *st, sfVector2i mouse_pos);

void erase_circle_from_pixel(main_st *st, sfVector2i ms_pos);

void call_eraser(main_st *st);

void update_line_size(main_st *st);

int check_sprite(main_st *st, int i);

int check_moover_click(main_st *st);

void update_color_wheel(main_st *st);

int check_restore(main_st *st, int i);

void restore_image(main_st *st);

int check_rectshape(main_st *st, int i);

int get_indice(main_st *st);


/* ZOOMING */

void zoom(main_st *st);

/*lib function*/

int my_strcmp(char const *s1, char const *s2);

int return_pos(int i);

char *my_strcpy(char *, char const *);

/*event function*/

void event(main_st *st);

void clear(main_st *st);

sfBool is_clicked (main_st *st, int i);

void update_pixel(main_st *st, sfVector2i);

void update_brush_pixel(main_st *st, sfVector2i, int);

int main_help(main_st *st);

/* button hanldle*/

void create_button_text(main_st *, sfVector2f, sfVector2f, char *);

#endif
