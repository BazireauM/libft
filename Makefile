NAME	=	libft.a

SRCS	=	ft_isalnum.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_memset.c\
		ft_isalpha.c\
		ft_isprint.c\
		ft_strlen.c

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

RM	=	rm -f

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		ar rcs $(NAME) $(OBJS)

clean	:	
		$(RM) $(OBJS)

fclean	:	clean

		$(RM) $(NAME)

re	:	fclean $(NAME)
