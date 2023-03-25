CFLAGS = -Wall -Wextra -Wextra -Iinclude

LIB = 	lib/my_putchar.c			\
      	lib/my_put_float.c			\
      	lib/my_put_hex_lower.c		\
      	lib/my_put_hex_upper.c		\
      	lib/my_putlong_float.c		\
      	lib/my_put_nbr.c			\
      	lib/my_put_octal.c			\
      	lib/my_putstr.c				\
      	lib/my_put_u.c				\
      	lib/my_strlen.c				\
      	lib/my_printf.c				\
      	lib/my_put_bin.c			\
      	lib/binary_convert.c		\
		lib/main.c 					\

OBJ = $(LIB:.c=.o)

NAME = my_printf

$(NAME): $(OBJ)
	@gcc -o $(NAME) $(OBJ) $(CFLAGS)

all: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all