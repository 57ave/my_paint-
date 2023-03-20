/*
** EPITECH PROJECT, 2023
** my_paint
** File description:
** help
*/

#ifndef HELP_H_
    #define HELP_H_

void run_help_loop(main_st *st);

int help_event(main_st *st);

void init_help_window(main_st *st);

void init_text(main_st *st);

void draw_help_sprite(main_st *st);

void create_sprite(main_st *st);

void init_page_texture(main_st *st);

void init_page_sprite(main_st *st);

int check_click(main_st *st, sfSprite *sprite);

void next_page(main_st *st);

void previous_page(main_st *st);

#endif /* !HELP_H_ */
