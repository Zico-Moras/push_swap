CC = cc

CFLAGS = -Wall -Werror -Wextra -g

NAME = push_swap

SRC = push_swap.c ft_split.c functions.c utils.c stack_utils.c \
      swap_command.c push_command.c rotate_command.c reverse_rotate_command.c \

OBJ = $(SRC:.c=.o)

RM = rm -rf






all: $(NAME) 

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^


clean: 
	$(RM) $(OBJ)

fclean: 
	$(RM) $(OBJ) $(NAME)

re: fclean all
