name = libft.a

CC = gcc
CFLAGS = -Wall -pedantic -std=c99
ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c  ft_putnbr_fd.c
SRCSBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
CFILES = ft_isdigit.c
OBJS = $(SRCS:.c=.o)
OBJSBONUS = $(SRCSBONUS:.c=.o)
INCLUDE = -I ./
DEPS = $(SRCS:.c=.d)
DEPS_BONUS = $(SRCSBONUS:.c=.d)
all: $(NAME)
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o : %.c
        $(cc) $(CFLAGS) 

include $(DEPS)
bonus: $(BONUS)
$(BONUS) : $(OBJS) $(OBJSBONUS)
	ar -rcs $(NAME) $(OBJS) $(OBJSBONUS)
include $(DEPS_BONUS)

clean:
	$(RM) $(OBJS) $(OBJSBONUS) $(DEPS) $(DEPS_BONUS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
