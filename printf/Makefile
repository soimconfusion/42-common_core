NAME = libftprintf.a
CC = cc
RM = rm -f
HEADER_DIR = header
FLAGS = -Wall -Wextra -Werror -I${HEADER_DIR}}
AR = ar rcs

SRC = sources/ft_printf.c\
	sources/ft_print_char.c\
	sources/ft_print_str.c\
	sources/ft_print_uns.c\
	sources/ft_print_hex.c\
	sources/ft_print_ptr.c\
	sources/ft_print_nbr.c

OBJS = ${SRC:.c=.o}

TEST_SRC = test_printf.c
TEST_NAME = test_printf

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(TEST_NAME)

re: fclean all

test: $(NAME)
	$(CC) $(FLAGS) $(TEST_SRC) -L. -lftprintf -o $(TEST_NAME)
	./$(TEST_NAME)

.PHONY: all clean fclean re test
