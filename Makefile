##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	my_compute_power_rec.c 		\
		my_int_to_hex.c 		\
		my_int_to_oct.c 		\
		my_long_to_hex.c 		\
		my_printf.c 			\
		my_put_long.c 			\
		my_put_nbr.c 			\
		my_put_unsigned.c 		\
		my_putstr.c 			\
		my_putchar.c 			\
		my_revstr.c			\
		my_strlen.c			\
		uns_to_bin.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-include ./include/my_printf.h

all:
	gcc -c $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

bin:
	gcc $(CFLAGS) *.c

binclean:
	rm a.out