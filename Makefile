##
## EPITECH PROJECT, 2023
## project
## File description:
## Makefile
##

SRC	=	src/main.c \
		src/clock.c \
		src/display.c \
		src/symbol.c \
		src/letter_0_4.c \
		src/letter_5_9.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc
CFLAGS	= -Wall -Wextra
LDFLAGS	=	-lncurses
EXE	=	clock

all:	$(EXE)

%.o:	%.c
		$(CC) -o $@ -c $^ $(CFLAGS)

$(EXE):	$(OBJ)
		$(CC) -o $(EXE) $(OBJ) $(LDFLAGS)

clean:
		rm -rf $(OBJ)
		rm -rf vgcore*
		rm -rf *.gcda
		rm -rf *.gcno

fclean:	clean
		rm -rf $(EXE)

re:	fclean all
