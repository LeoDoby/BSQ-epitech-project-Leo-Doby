##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## hey
##

SRC = *.c

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(SRC) $(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	cp my.h ../../include/
	cp $(NAME) ../
	make clean
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
