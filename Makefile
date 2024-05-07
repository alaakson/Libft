NAME =libft.a

CC	= cc
AR = ar
SRC	=	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memmove.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strrchr.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c
	
BNS_S =	ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c \
		ft_lstlast.c


OFILES	=	$(SRC:%.c=%.o)

BOFILES	=	$(BNS_S:%.c=%.o)
CFLAGS	=	-Wall -Wextra -Werror
all: $(NAME)
$(NAME):	$(OFILES) 
	$(AR)	-rcs	$(NAME)	$(OFILES)
bonus: $(OFILES) $(BOFILES)
	$(AR) -rcs $(NAME) $(OFILES) $(BOFILES)
%.o: %.c 
	$(CC)	$(CFLAGS) -c $< -o $@ 
clean:
	rm -f	$(OFILES) $(BOFILES)
fclean: clean
	rm -f	$(NAME)

re: fclean all

.PHONY: all clean fclean re