NAME = libftprintf.a
CC = cc
RM = rm -f
FLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRC = ft_printf.c\
	ft_print_char.c\
	ft_print_str.c\
	ft_print_uns.c\
	ft_print_hex.c\
	ft_print_ptr.c\
	ft_print_nbr.c

BONUS_SRC = ft_printf_bonus.c\
	ft_print_char_bonus.c\
	ft_print_str_bonus.c\
	ft_print_uns_bonus.c\
	ft_print_hex_bonus.c\
	ft_print_ptr_bonus.c\
	ft_print_nbr_bonus.c\
	ft_handle_flags_bonus.c

OBJS = ${SRC:.c=.o}
BONUS_OBJS = ${BONUS_SRC:.c=.o}

TEST_SRC = test_printf.c
TEST_NAME = test_printf

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(TEST_NAME)

re: fclean all

test: $(NAME)
	$(CC) $(FLAGS) $(TEST_SRC) -L. -lftprintf -o $(TEST_NAME)
	./$(TEST_NAME)

.PHONY: all clean fclean re test bonus
