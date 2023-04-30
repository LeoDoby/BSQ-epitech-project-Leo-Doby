##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## hey
##

SRC = *.c

OBJ = $(SRC:.c=.o)

NAME = bsq

all: $(SRC) $(OBJ)
	cd lib/my/ && make all
	gcc *.c -I. -L ./lib/my/ -lmy -Wextra -Wall -lncurses -o $(NAME) -g
	make clean
clean:
	rm -f $(OBJ)
	cd lib/my/ && make clean
fclean: clean
	rm -f $(NAME)
	cd lib/my/ && make fclean

re: fclean all
