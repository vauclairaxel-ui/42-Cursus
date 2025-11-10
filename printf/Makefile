NAME        = libftprintf.a
CC          = cc
CFLAGS      = -Wall -Wextra -Werror

SRC_DIR     = .
SRC         = $(SRC_DIR)/ft_printf.c \
              $(SRC_DIR)/put_hex.c \
              $(SRC_DIR)/put_hex_upper.c \
              $(SRC_DIR)/write_c.c \
              $(SRC_DIR)/write_d.c \
              $(SRC_DIR)/write_p.c \
              $(SRC_DIR)/write_percent.c \
              $(SRC_DIR)/write_s.c \
              $(SRC_DIR)/write_u.c \
              $(SRC_DIR)/write_upper_x.c \
              $(SRC_DIR)/write_x.c
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
