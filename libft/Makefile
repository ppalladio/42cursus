# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yupeng <yupeng@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 14:08:46 by yupeng            #+#    #+#              #
#    Updated: 2023/01/26 14:08:55 by yupeng           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
HEADER=libft.h
CC=gcc
CFLAGS=-Wall -Wextra -Werror

SRC=ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c\
ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
ft_putnbr_fd.c
OBJ=$(SRC:.c=.o)


SRCBONUS=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
ft_lstiter.c ft_lstmap.c
OBJBONUS=$(SRCBONUS:.c=.o)

all:$(NAME)

%.o:%.c $(HEADER)
	$(CC) $(CFLAG) -c $< -o $@

$(NAME):$(OBJ) $(HEADER)
	ar rcs $(NAME) $(OBJ)

bonus:.bonus

.bonus:$(OBJ) $(SRCBONUS)
	ar rcs $(NAME)  $(SRCBONUS)
	
clean:
	rm -f ${OBJ} ${OBJBONUS}

fclean:clean
	rm -f ${NAME}

re:fclean all

.PHONY:	all clean fclean re bonus