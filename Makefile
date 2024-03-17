NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

SRCS =	ft_putchar.c \
		ft_putstr.c \
		ft_putnbr.c \
		ft_putui.c \
		ft_puthex_lower.c \
		ft_puthex_upper.c \
		ft_putaddr.c \
		ft_printf.c 

OBJS = $(SRCS:.c=.o)

HEADER = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
