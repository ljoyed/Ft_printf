CC = gcc

AR = ar

NAME = libftprintf.a

ARFLAGS = rc

CFLAGS = -Wall -Werror -Wextra

SRCFILES = 	ft_istype.c \
			ft_printf.c \
			ft_put_c.c \
			ft_put_i.c \
			ft_put_p.c \
			ft_put_s.c \
			ft_put_u.c \
			ft_put_x.c

OBJFILES = ${SRCFILES:.c=.o}

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME) : $(OBJFILES)
	$(AR) $(ARFLAGS) $(NAME) $(OBJFILES)


all : $(NAME)

fclean : clean
	rm -rf $(NAME)

clean :
	rm -rf $(OBJFILES)

re : fclean $(NAME)

.PHONY: all clean fclean re