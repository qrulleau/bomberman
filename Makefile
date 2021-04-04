CC      =       gcc

NAME    =       main

SRC     =       main.c

OBJ     =       $(SRC:%.c=%.o)

CFLAGS  =       -Wall -Wextra -W -Werror -std=c11 -L./lib -I./include -lSDL2-2.0

RM      =       rm -rf


all:            $(NAME)

$(NAME):        $(OBJ)
								$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
								$(RM) $(OBJ)

fclean:         clean
								$(RM) $(NAME)

re:             fclean all

.PHONY:         fclean clean re
