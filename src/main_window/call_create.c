/*
** EPITECH PROJECT, 2023
** my_pzint
** File description:
** call_create
*/
#include "my.h"

void create_window(main_st *st)
{
    init_window(st);
    create_rect_shape(st,(sfVector2f){0, 0},
    (sfVector2f){1920, 1080}, (sfColor){120, 120, 135, 255});
    create_sprite_from_file(st, "src/image/behind_icon.png",
    (sfVector2f){18, 150},(sfVector2f){75, 75});
    create_sprite_from_file(st, "src/image/simple_pen.png",
    (sfVector2f){30, 160},(sfVector2f){0, 0});
    create_sprite_from_file(st, "src/image/behind_icon.png",
    (sfVector2f){100, 150}, (sfVector2f){75, 75});
    create_sprite_from_file(st, "src/image/eraser.png",
    (sfVector2f){110, 155}, (sfVector2f){0, 0});
    create_rect_shape(st, (sfVector2f){5, 5},(sfVector2f){1910, 35},
    (sfColor){200, 200, 230, 255});
    create_rect_shape(st, (sfVector2f){1652, 50}, (sfVector2f){255, 810},
    (sfColor){200, 200, 230, 255});
    create_rect_shape(st, (sfVector2f){10, 50}, (sfVector2f){180, 810},
    (sfColor){200, 200, 230, 255});
    create_sprite_from_file(st, "src/image/color_wheel.png",
    (sfVector2f){1670, 65}, (sfVector2f){0, 0});
}

void create_window2(main_st *st)
{
    create_sprite_from_file(st, "src/image/behind_icon.png",
    (sfVector2f){1680, 320}, (sfVector2f){75, 75});
    create_sprite_from_file(st, "src/image/color_picker.png",
    (sfVector2f){1690, 330}, (sfVector2f){0, 0});
    create_rect_shape(st, (sfVector2f){1800, 320}, (sfVector2f){80, 80},
    (sfColor){255, 255, 255, 255});
    create_rect_shape(st, (sfVector2f){135, 250}, (sfVector2f){6, 100},
    (sfColor){72, 33, 135, 255});
    create_rect_shape(st, (sfVector2f){123, 250}, (sfVector2f){30, 10},
    sfRed);
    create_sprite_from_file(st, "src/image/behind_icon_2tier.png",
    (sfVector2f){1680, 430}, (sfVector2f){50, 50});
    create_sprite_from_file(st, "src/image/color_wheel_pastel_icon.png",
    (sfVector2f){1682, 433}, (sfVector2f){50, 50});
    create_sprite_from_file(st, "src/image/color_wheel_pastel.png",
    (sfVector2f){1670, 65}, (sfVector2f){0, 0});
    create_rect_shape(st, (sfVector2f){5, 8}, (sfVector2f){60, 30},
    (sfColor){130, 130, 130, 255});
    create_button_text(st, (sfVector2f){15, 7}, (sfVector2f){0, 0}, "File:");
}

void create_window3(main_st *st)
{
    create_sprite_from_file(st, "src/image/behind_icon.png",
    (sfVector2f){18, 60}, (sfVector2f){75, 75});
    create_sprite_from_file(st, "src/image/loupe.png",
    (sfVector2f){25, 70}, (sfVector2f){75, 75});
    create_sprite_from_file(st, "src/image/behind_icon.png",
    (sfVector2f){100, 60}, (sfVector2f){75, 75});
    create_sprite_from_file(st, "src/image/restore.png",
    (sfVector2f){110, 70}, (sfVector2f){75, 75});
    create_sprite_from_file(st, "src/image/behind_icon_2tier.png",
    (sfVector2f){1750, 430}, (sfVector2f){50, 50});
    create_sprite_from_file(st, "src/image/color_wheel_icon.png",
    (sfVector2f){1752, 433}, (sfVector2f){50, 50});
    create_button_text(st, (sfVector2f){75, 7}, (sfVector2f){0, 0}, "Save");
    create_button_text(st, (sfVector2f){150, 7}, (sfVector2f){0, 0}, "Help");
    create_rect_shape(st, (sfVector2f){65, 8}, (sfVector2f){80, 30},
    (sfColor){130, 130, 130, 255});
    create_rect_shape(st, (sfVector2f){140, 8}, (sfVector2f){70, 30},
    (sfColor){130, 130, 130, 255});
}
