NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror
OPTION = -c
SRC = print*.c ft_*.c 
RUN = make all

all: $(NAME)

$(NAME):
	make -C libft all
	mv libft/libft.a $(NAME)
	cc $(FLAG) $(OPTION) $(SRC)
	ar rcs $(NAME) *.o

clean:
	rm -f *.o
	cd libft && make clean
fclean: clean
	rm -f $(NAME)
	cd libft && make fclean
re: fclean all

.PHONY: all clean fclean re
