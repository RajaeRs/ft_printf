SRCS	= ft_print_adr.c ft_print_char.c ft_print_hex.c ft_print_nbr.c \
		ft_print_str.c ft_print_u.c print_data_type.c ft_printf.c

OBJS	= $(SRCS:.c=.o)

NAME	= libftprintf.a 

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f 

$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)

all:	$(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re:		fclean all