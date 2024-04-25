
NAME = libft.a

SRC = ft_atoi.c \
			ft_bzero.c \ 
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_atoi.c \
			ft_itoa.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_memset.c \
			ft_puthcar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			ft_split.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_striteri.c \
			ft_strjoin.c \
			ft_srtlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strmapi.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \

SRCSB = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstadd_back.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstsize.c \
			ft_lstmap.c \
			$(SRC)

CC = cc
OBJS = $(SRC:%.c=%.o)
BNS_OBJS = $(SRCSB:%.c=%.o)

CFLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) 
	ar rcs $(NAME) $(OBJS)
bonus: $(NAME)
	//some here still..
clean:
	rm -f $(OBJS) $(BNS_OBJS)
debug: $(OBJS)
	cc $(FLAGS) $(DEBUG_FLAGS) $(OBJS) -o $(NAME)
fclean: clean
	rm -f $(NAME)
%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@ 
re: fclean all

.PHONY all clean fclean re