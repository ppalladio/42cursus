NAME=get_next_line.a
HEADER=get_next_line.h
CC = gcc
CFLAGS=-Wall -Wextra -Werror
AR=ar rcs

SRC=get_next_line.c
OBJ=$(SRC:.c=.o)

SRCBONUS=get_next_line_bonus.c
OBJBONUS=$(SRCBONUS:.c=..o)

all:$(NAME)

%.o:%.c $(HEADER)
	$(CC) $(CFLAG) -c $< -o $@

$(NAME):$(OBJ) $(HEADER)
	$(AR) $(NAME) $(OBJ)

bonus:.bonus

.bonus:$(OBJ) $(OBJBONUS)
	$(AR) $(NAME) $?

clean:
	rm -rf ${OBJ} ${OBJBONUS}

fclean:clean
	rm -rf ${NAME}

re:fclean all

.PHONY:	all clean fclean re bonus