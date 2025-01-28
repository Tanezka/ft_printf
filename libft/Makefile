NAME = libft.a
FLAG = -Wall -Wextra -Werror
OPTION = -c
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = ft_lst*.c

all: $(NAME)
	
$(NAME):
		gcc $(FLAG) $(OPTION) $(SRC) -I .
		ar rc $(NAME) *.o
bonus:
		gcc $(FLAG) $(OPTION) $(BONUS) -I .
		ar rc $(NAME) ft_lst*.o
clean:
		rm -f *.o
fclean: clean
		rm -f $(NAME)
re: fclean all
