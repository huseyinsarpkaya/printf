NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror 

AR = ar rcs

SRC =	ft_hex.c\
		ft_putnbr.c\
		ft_putpoint.c\
		ft_str.c\
		ft_uputnbr.c\
		ft_printf.c\


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $?

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

