##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make file.
##

SRC	=	./main.c

OBJ	=	$(notdir $(SRC:.c=.o))

NAME	=	Aire

all:	$(NAME)

$(NAME):
	gcc -c $(SRC)
	gcc -lm -o $(NAME) $(OBJ)

clean:
	rm -f *.o
	rm -f *# *~ ./*/*# ./*/*~ ./*/*/*# ./*/*/*~ vgcore*

fclean:	clean
	rm -f $(NAME)

re:	fclean all

valgrind:	clean
	gcc -lm  -g3 -o $(NAME) $(SRC)

prepush: fclean
	git add .
	git status

full: update
	make re

pull:
	git pull origin master

tree: prepush
	tree -a -I .git

debug: clean
	gcc -lm -g3 -o $(NAME) $(SRC) -Wall -Wextra -pedantic

push: prepush
	git commit -m "push auto"
	git push origin master
