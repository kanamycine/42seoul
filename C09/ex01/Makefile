NAME	= libft.a
SRC		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
FLAG	= -Wall -Wextra -Werror
OBJECT	= $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	ar rc $(NAME) $(OBJECT)

.c.o :
	gcc $(FLAG) -c -I includes $< -o $@

clean :
	rm -f $(OBJECT)

fclean : clean
	rm -f $(NAME)

re : fclean all
