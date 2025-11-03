CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c    ft_putchar.c  ft_putlowhex.c  ft_putnbr.c  ft_putnbrun.c  ft_putptr.c  ft_putstr.c  ft_putuphex.c
OBJECTS = $(SRCS:.c=.o)
ARCHV = ar rcs

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME) 
$(NAME): $(OBJECTS)
	$(ARCHV) $(NAME) $(OBJECTS)
clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
