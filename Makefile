##
## EPITECH PROJECT, 2019
## 107transfer
## File description:
## makefile
##

SRC	=	main.c		\
		usage_h.c

OBJ	=	$(SRC:.c=.o)

NAME	=	107transfer

CFLAGS	=	-g -g3 -ggdb -I ./include -lm

all:		$(NAME) message

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f *~ $(NAME)

re:		fclean all

message:
		@echo "SUCCESSFULLY COMPILED!"
