NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC =		ft_hex.c\
			ft_putnbr.c\
			ft_putpoint.c\
			ft_str.c\
			ft_unputnbr.c\


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re


