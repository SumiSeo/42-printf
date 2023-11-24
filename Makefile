CC = cc
CFLAGS = -Wall -Wextra -Werror -g3
NAME = libftprintf.a
SOURCE_DIR = utils
SOURCE = ft_printft.c ft_putchar.c ft_putnbr_base.c ft_putnbr.c /
			ft_putptr.c ft_putstr.c ft_putunbr.c 
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
