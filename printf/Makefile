
NAME = 	libftprintf.a

CC = cc

RM = rm -f
FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c\ 1
	ft_printchar.c\1
	ft_printstr.c\1
	ft_putchar_fd.c\1
	ft_putstr_fd.c\1
	ft_printnbr.c\1
	ft_strdup.c\1
	ft_itoa.c\1
	ft_strlen.c\1
	ft_print_pointer.c\
	ft_print_uns.c\
	ft_uitoa.c\
	ft_printhex.c
	


OBJS = ${SRC:.c=.o}

all :	$(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)
%.o: %.c
		cc $(FLAGS) -c $< -o $@
clean:
		$(RM) $(OBJS)
fclean:	clean
		$(RM) $(NAME)
re:	fclean all

.PHONY:		all clean fclean re