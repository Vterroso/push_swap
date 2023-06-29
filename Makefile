NAME 	= 	push_swap
CC		=	gcc
CFLAGS	=	-c -Wall -Werror -Wextra
RM		=	rm -f
SRCS	=	ft_add_stack.c ft_check_args.c ft_error.c ft_free.c ft_sort.c ft_utils.c is_sorted.c \
			push.c reverse.c rotate.c swap.c main.c

LIBFT	=	libft/libft.a
PRINTF =	ft_printf/libftprintf.a

OBJS		=	$(SRCS:.c=.o)

INCLUDE	=	push_swap.h

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE) $(LIBFT) $(PRINTF)
			$(NAME) $(OBJS)

$(LIBFT):	
			@make -C libft
$(PRINTF):	
			@make -C ft_printf

clean:
	@$(RM) $(OBJS)
	@make clean -C libft
	@make clean -C ft_printf

fclean:		clean
	@$(RM) $(NAME)
	@make fclean -C libft
	@make fclean -C ft_printf

re:			fclean all


.PHONY: all clean fclean re