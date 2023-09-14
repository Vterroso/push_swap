NAME 	= 	push_swap
CC		=	gcc -g
CFLAGS	=	-c -Wall -Werror -Wextra
RM		=	rm -f
SRCS	=	ft_add_stack.c ft_check_args.c ft_error.c ft_sort.c ft_utils.c is_sorted.c \
			push.c reverse.c rotate.c swap.c main.c ft_utils_lst.c ft_simplify.c

LIBFT	=	libft/libft.a

OBJS		=	$(SRCS:.c=.o)

LIB 	=	ar rcs
INCLUDE	=	push_swap.h

all:		$(NAME)

			
$(NAME):	$(OBJS) $(INCLUDE) $(LIBFT)
			$(CC) $(OBJS) -o $(NAME) $(LIBFT)


$(LIBFT):	
			@make -C libft

clean:
	@$(RM) $(OBJS)
	@make clean -C libft

fclean:		clean
	@$(RM) $(NAME)
	@make fclean -C libft

re:			fclean all


.PHONY: all clean fclean re