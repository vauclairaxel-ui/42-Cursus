NAME        = libftprintf.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror

SRC_DIR     = .
SRC         = $(SRC_DIR)/ft_printf.c
OBJ         = $(SRC:.c=.o)

LIBFT_DIR   = Libft
LIBFT       = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
