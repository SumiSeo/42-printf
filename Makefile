CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
NAME = libftprintf.a
SOURCE = ft_printft.c
OBJ = $(SOURCE:.c=.o)
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)
clean:
	$(RM) $(OBJ) 

fclean : 
	$(RM) $(NAME)

re: fclean all