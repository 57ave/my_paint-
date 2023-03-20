##
## EPITECH PROJECT, 2022
## paint
## File description:
## Makefile
##

NAME =	my_paint

CC = gcc

SRC_DIR = src/

SRC_FILES	=	main_window/main.c	\
				main_window/init.c 	\
				main_window/run.c 	\
				main_window/create_function.c	\
				main_window/event.c	\
				main_window/write.c \
				main_window/shaper.c	\
				main_window/manage_color.c	\
				main_window/eraser.c	\
				main_window/check_pos.c	\
				main_window/call_create.c	\
				main_window/draw_sprite.c 	\
				main_window/zoom.c 	\
				main_window/handle_click.c 	\
				help_window/event.c \
				help_window/main_loop.c	\
				help_window/init.c 	\
				help_window/manage_sprite.c	\
				lib/my_strcpy.c \
				help_window/manage_page.c 	\

SRC	=	$(addprefix $(SRC_DIR), $(SRC_FILES))

CSFMLINK = 	-lcsfml-graphics	\
			-lcsfml-window	\
			-lcsfml-system	\

all: $(NAME)

$(NAME):
	$(CC) $(SRC) -I include/ $(CSFMLINK) -o $(NAME) -g3

clean:
	$(RM) *~

fclean: clean
	$(RM) $(NAME)

re: fclean all
