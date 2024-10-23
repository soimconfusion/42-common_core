
NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror


SRC = ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_bzero.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strchr.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c \
	ft_strncmp.c\
	ft_strnstr.c\
	$ft_strrchr.c\
	ft_atoi.c\
	ft_calloc.c\
	ft_strdup.c\
	

MAIN_SRC = main.c

OBJS = $(SRC:.c=.o)
MAIN_OBJS = $(MAIN_SRC:.c=.o)

all: $(NAME)

#compile lib
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
#compile objs
%.o : %.c
	$(CC) $(FLAGS) -I $(HEADER) -c $< -o $@

main: $(MAIN_OBJS) $(NAME)
	$(CC) $(FLAGS) -I $(HEADER) $(MAIN_OBJS) -o main $(NAME)

test: main
	./main

clean:
	rm -f $(OBJS) $(MAIN_OBJS)
	
fclean:
	rm -f $(NAME) main
	
re: fclean all

