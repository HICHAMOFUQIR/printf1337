NAME = libftprintf.a

HEADER = ft_printf.h

SRCS = ft_printf.c ft_print_str.c ft_print_char.c ft_print_int.c ft_print_hex.c ft_print_ptr.c 

OBJ = $(SRCS:.c=.o)

CC = cc

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean 
	rm -f $(NAME)

re : fclean all